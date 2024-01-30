@interface BiometricEnrollOperation : BiometricOperation {
    struct { unsigned int usingAuthToken; unsigned int tokenLength; unsigned char token[32]; } _authData;
}

@property (nonatomic) unsigned int userID;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned int x1; unsigned char x2[32]; } *authData;
@property (nonatomic) unsigned int processedFlags;

- (unsigned int)cancelledMessage;
- (id)init;
- (int)type;

@end
