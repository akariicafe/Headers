@class NSDate;

@interface ICAssetThumbnailCache : NSObject <ICThumbnailCaching>

@property (class, nonatomic, readonly) NSDate *currentVersionDate;
@property (class, nonatomic, readonly) ICAssetThumbnailCache *shared;

- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateForObjectIdentifiers:(id)a0;
- (id)creationDateFor:(id)a0;

@end
