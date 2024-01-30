@class NSString;

@interface VSIdentityProviderAlertAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
