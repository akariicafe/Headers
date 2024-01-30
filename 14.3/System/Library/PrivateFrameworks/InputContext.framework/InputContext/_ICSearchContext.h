@class NSString, NSArray;

@interface _ICSearchContext : NSObject

@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) BOOL isResponseContextDenylisted;
@property (readonly, nonatomic) BOOL shouldDisableAutoCaps;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 recipients:(id)a1 applicationBundleIdentifier:(id)a2 isResponseContextDenylisted:(BOOL)a3 shouldDisableAutoCaps:(BOOL)a4;

@end
