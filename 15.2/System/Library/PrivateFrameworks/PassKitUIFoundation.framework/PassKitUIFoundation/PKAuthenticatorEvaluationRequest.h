@class NSString, NSNumber, NSData;

@interface PKAuthenticatorEvaluationRequest : NSObject

@property (readonly, nonatomic) long long policy;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *processName;
@property (copy, nonatomic) NSNumber *processIdentifier;
@property (copy, nonatomic) NSString *PINTitle;
@property (copy, nonatomic) NSNumber *PINLength;
@property (retain, nonatomic) NSData *externalizedContext;
@property (nonatomic) struct __SecAccessControl { } *accessControlRef;
@property (nonatomic) BOOL useStockAuthInterface;
@property (copy, nonatomic) NSString *physicalButtonTitle;
@property (copy, nonatomic) NSString *passcodeTitle;
@property (nonatomic) BOOL hasInitialAuthenticatorState;
@property (nonatomic) unsigned long long initialAuthenticatorState;
@property (nonatomic) BOOL assumeUserIntentAvailable;
@property (nonatomic) BOOL passcodeOnly;

- (id)initWithPolicy:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
