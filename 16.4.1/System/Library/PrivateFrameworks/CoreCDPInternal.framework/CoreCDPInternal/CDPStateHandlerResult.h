@class NSError;

@interface CDPStateHandlerResult : NSObject

@property BOOL cloudDataProtectionEnabled;
@property BOOL shouldCompleteSignIn;
@property unsigned long long peeriCloudKeychainState;
@property (retain) NSError *error;

+ (id)resultWithError:(id)a0;
+ (id)resultWithCloudDataProtectionEnabled:(BOOL)a0 shouldCompleteSignIn:(BOOL)a1 error:(id)a2;
+ (id)resultWithCloudDataProtectionEnabled:(BOOL)a0 shouldCompleteSignIn:(BOOL)a1 peeriCloudKeychainState:(unsigned long long)a2 error:(id)a3;
+ (id)successResult;

- (void).cxx_destruct;

@end
