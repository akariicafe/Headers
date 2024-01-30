@protocol MTLDeadlineProfile;

@interface _MTLCommandBufferDescriptor : MTLCommandBufferDescriptor {
    BOOL _retainedReferences;
    unsigned long long _errorOptions;
}

@property (nonatomic) BOOL captureProgramAddressTable;
@property (nonatomic) id<MTLDeadlineProfile> deadlineProfile;
@property (nonatomic) BOOL disableFineGrainedComputePreemption;

- (unsigned long long)errorOptions;
- (void)setErrorOptions:(unsigned long long)a0;
- (void)setRetainedReferences:(BOOL)a0;
- (BOOL)retainedReferences;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
