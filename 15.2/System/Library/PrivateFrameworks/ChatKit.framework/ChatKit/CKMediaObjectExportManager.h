@class NSArray, NSString;

@interface CKMediaObjectExportManager : NSObject

@property (retain, nonatomic) NSArray *queuedMediaObjects;
@property (nonatomic) BOOL queuedMediaObjectsArePhotosCompatible;
@property (retain, nonatomic) NSString *metricsSource;
@property (nonatomic) BOOL ignoreSyndicationIdentifiers;

+ (id)_serialBackgroundQueue;

- (void).cxx_destruct;
- (id)initWithMediaObjects:(id)a0;
- (void)exportQueuedMediaObjectsWithCompletion:(id /* block */)a0;
- (void)queueMediaObject:(id)a0;
- (void)exportMediaObjects:(id)a0 completion:(id /* block */)a1;
- (void)exportMediaObjects:(id)a0 withFileNames:(id)a1 completion:(id /* block */)a2;
- (id)_phAssetCreationRequestForMediaObject:(id)a0 withSyndicationIdentifier:(id)a1;
- (void)dequeueMediaObject:(id)a0;
- (void)exportMediaObject:(id)a0 completion:(id /* block */)a1;
- (void)exportMediaObject:(id)a0 withFileName:(id)a1 completion:(id /* block */)a2;
- (id)initWithMediaObject:(id)a0;

@end
