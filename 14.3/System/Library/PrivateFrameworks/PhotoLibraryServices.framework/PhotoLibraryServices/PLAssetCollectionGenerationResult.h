@class NSSet;

@interface PLAssetCollectionGenerationResult : NSObject

@property (readonly, nonatomic) NSSet *insertedOrUpdatedMoments;
@property (readonly, nonatomic) BOOL frequentLocationsDidChange;

- (void).cxx_destruct;
- (id)initWithInsertedOrUpdatedMoments:(id)a0 frequentLocationsDidChange:(BOOL)a1;

@end
