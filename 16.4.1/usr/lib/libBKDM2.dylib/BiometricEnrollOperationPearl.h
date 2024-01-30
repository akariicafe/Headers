@interface BiometricEnrollOperationPearl : BiometricEnrollOperation {
    struct { unsigned int userID; unsigned char uuid[16]; } _augmentedIdentity;
}

@property (nonatomic) unsigned int enrollmentType;
@property (readonly, nonatomic) struct { unsigned int x0; unsigned char x1[16]; } *augmentedIdentity;
@property (nonatomic) BOOL clientToComplete;
@property (nonatomic) unsigned char periocularGlassesRequirement;

- (id)init;

@end
