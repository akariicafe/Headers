@class NSString, NSArray;

@interface TRDeviceSetupAuthenticateAction : TRDeviceSetupAction

@property (readonly, nonatomic) unsigned long long accountType;
@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, copy, nonatomic) NSString *accountPassword;
@property (readonly, copy, nonatomic) NSArray *accountTypesWithSharedCredentials;
@property (readonly, nonatomic) unsigned long long attemptCount;
@property (readonly, copy, nonatomic) NSString *requestMessage;
@property (readonly, copy, nonatomic) NSString *failureMessage;

+ (id)actionForCancelledRequestWithOriginalAction:(id)a0;
+ (id)actionForFailedAttemptWithOriginalAction:(id)a0 requestMessage:(id)a1 failureMessage:(id)a2;
+ (id)actionForFinishedRequestWithOriginalAction:(id)a0 accountID:(id)a1 accountPassword:(id)a2 accountTypesWithSharedCredentials:(id)a3;
+ (id)actionForInitialAttemptWithAccountType:(unsigned long long)a0 requestMessage:(id)a1;

- (id)init;
- (id)_initWithAccountType:(unsigned long long)a0 accountID:(id)a1 accountPassword:(id)a2 accountTypesWithSharedCredentials:(id)a3 attemptCount:(unsigned long long)a4 requestMessage:(id)a5 failureMessage:(id)a6;

@end
