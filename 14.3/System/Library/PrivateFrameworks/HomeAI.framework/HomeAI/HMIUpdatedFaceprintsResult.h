@class NSSet;

@interface HMIUpdatedFaceprintsResult : HMFObject

@property (readonly) NSSet *allAtCurrentVersion;
@property (readonly) NSSet *existingAtOtherVersions;
@property (readonly) NSSet *createdAtCurrentVersion;
@property (readonly) NSSet *existingAtCurrentVersion;

- (void).cxx_destruct;
- (id)initWithExistingAtCurrentVersion:(id)a0 createdAtCurrentVersion:(id)a1 existingAtOtherVersions:(id)a2;

@end
