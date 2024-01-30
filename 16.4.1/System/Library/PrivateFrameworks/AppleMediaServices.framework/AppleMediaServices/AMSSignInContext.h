@class NSString;

@interface AMSSignInContext : NSObject <AMSHashable>

@property (nonatomic) BOOL canMakeAccountActive;
@property (retain, nonatomic) NSString *debugReason;
@property (nonatomic) BOOL ignoreAccountConversion;
@property (nonatomic) BOOL skipAuthentication;
@property (readonly, nonatomic) NSString *hashedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
