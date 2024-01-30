@class NSString, NSURL;

@interface PBFPosterDescriptorStoreCoordinator : PBFPosterModelStoreCoordinator {
    NSURL *_descriptorIdentifierURL;
    NSString *_descriptorIdentifier;
}

@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;

+ (long long)type;
+ (BOOL)shouldBeExcludedFromBackup;

- (id)initWithPath:(id)a0;
- (id)checkEnvironmentConsistency;
- (id)_accessQueue_descriptorIdentifierURL;
- (id)initExistingStoreCoordinatorWithExtensionIdentifier:(id)a0 identifierURL:(id)a1 posterUUID:(id)a2;
- (id)_accessQueue_buildIdentityForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1;
- (id)_accessQueue_descriptorIdentifier;
- (void).cxx_destruct;

@end
