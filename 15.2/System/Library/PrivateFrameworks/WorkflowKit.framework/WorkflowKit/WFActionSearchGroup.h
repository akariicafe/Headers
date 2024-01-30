@class NSString, NSArray;

@interface WFActionSearchGroup : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSArray *actions;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 localizedName:(id)a1 actions:(id)a2;

@end
