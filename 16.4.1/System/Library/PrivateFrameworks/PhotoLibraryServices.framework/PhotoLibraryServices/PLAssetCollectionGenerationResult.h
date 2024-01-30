@class NSSet;

@interface PLAssetCollectionGenerationResult : NSObject

@property (readonly, nonatomic) NSSet *insertedOrUpdatedMoments;
@property (readonly, nonatomic) BOOL frequentLocationsDidChange;

- (id)initWithInsertedOrUpdatedMoments:(id)a0 frequentLocationsDidChange:(BOOL)a1;
- (void).cxx_destruct;

@end
