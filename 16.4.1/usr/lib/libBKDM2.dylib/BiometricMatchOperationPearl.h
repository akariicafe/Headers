@interface BiometricMatchOperationPearl : BiometricMatchOperation {
    struct { unsigned int userID; unsigned char uuid[16]; } _preAugmentationCheckIdentity;
}

@property (nonatomic) BOOL longTimeout;
@property (nonatomic) BOOL autoRetry;
@property (nonatomic) BOOL preAugmentationCheck;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned char x1[16]; } *preAugmentationCheckIdentity;
@property (nonatomic) BOOL fullFaceOnly;

- (id)init;

@end
