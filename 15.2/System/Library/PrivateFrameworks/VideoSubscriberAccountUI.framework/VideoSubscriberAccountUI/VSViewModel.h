@class NSError, NSString, VSIdentityProvider;

@interface VSViewModel : NSObject

@property (nonatomic) unsigned long long viewState;
@property (nonatomic, getter=shouldPreValidate) BOOL preValidate;
@property (nonatomic) unsigned long long validationState;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (nonatomic) long long userInterfaceStyle;

- (void).cxx_destruct;
- (id)init;
- (void)configureWithRequest:(id)a0;

@end
