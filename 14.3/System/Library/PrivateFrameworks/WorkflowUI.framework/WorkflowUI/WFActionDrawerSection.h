@class NSString, NSArray;

@interface WFActionDrawerSection : NSObject

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSArray *donations;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) long long sectionType;

- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)a0 actions:(id)a1 bundleIdentifier:(id)a2 sectionType:(long long)a3;
- (id)initWithLocalizedTitle:(id)a0 donations:(id)a1 bundleIdentifier:(id)a2 sectionType:(long long)a3 actions:(id)a4;
- (id)initAsLoading;

@end
