@class NSData;

@interface BiometricMatchOperation : BiometricOperation {
    struct { unsigned int usingAuthToken; unsigned int tokenLength; unsigned char token[32]; } _noBioLockoutAuthData;
}

@property (nonatomic) unsigned int userID;
@property (nonatomic) BOOL forUnlock;
@property (nonatomic) BOOL forCredentialSet;
@property (nonatomic) BOOL forPreArm;
@property (nonatomic) BOOL stopOnSuccess;
@property (nonatomic) BOOL noBioLockout;
@property (retain, nonatomic) NSData *acmContext;
@property (nonatomic) int useCase;
@property (nonatomic) unsigned int noBioLockoutUserID;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned int x1; unsigned char x2[32]; } *noBioLockoutAuthData;
@property (nonatomic) unsigned int processedFlags;

- (id)init;
- (void).cxx_destruct;
- (int)type;
- (unsigned int)cancelledMessage;

@end
