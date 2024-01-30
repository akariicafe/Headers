@class QLThumbnailGenerationRequest, QLPreviewThumbnailGenerator, QLDiskStore, NSError, NSNumber, NSObject;
@protocol OS_dispatch_group, QLIncrementalThumbnailGenerationHandler, OS_os_activity;

@interface QLTGeneratorThumbnailRequest : NSObject

@property (retain, nonatomic) NSNumber *requestBadgeType;
@property (nonatomic) unsigned long long handledRequestedTypes;
@property (nonatomic) unsigned long long successfullyHandldedRequestedTypes;
@property BOOL cancelled;
@property (retain) QLDiskStore *diskStore;
@property (readonly, nonatomic) QLThumbnailGenerationRequest *request;
@property (retain, nonatomic) QLPreviewThumbnailGenerator *generator;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *batchDispatchGroup;
@property (retain, nonatomic) NSError *generationError;
@property (readonly, nonatomic) id<QLIncrementalThumbnailGenerationHandler> generationHandler;
@property (readonly, nonatomic) unsigned long long unhandledRequestedTypes;
@property BOOL didCheckCache;
@property (readonly, nonatomic) unsigned long long badgeType;
@property (readonly) BOOL cacheEnabled;
@property (retain) NSObject<OS_os_activity> *topActivity;
@property (retain) NSObject<OS_os_activity> *activity;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)addTypeToHandledTypes:(long long)a0;
- (void)addTypeToSuccessfullyHandledTypes:(long long)a0;
- (BOOL)needsLowQualityThumbnailGeneration;
- (void)_adjustRequestInformationIfNeeded;
- (unsigned long long)_requestedTypesForRepresentationType:(long long)a0;
- (id)initWithRequest:(id)a0 generationHandler:(id)a1 batchDispatchGroup:(id)a2;
- (BOOL)shouldGenerateLowQualityThumbnailOnCacheMiss;
- (BOOL)hasHandledAllRequestedTypesOrMostRepresentativeType;

@end
