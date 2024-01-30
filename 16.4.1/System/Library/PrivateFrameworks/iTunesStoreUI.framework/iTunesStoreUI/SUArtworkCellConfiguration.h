@class NSString, NSMutableDictionary, NSNumber, NSMutableArray;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate> {
    NSMutableDictionary *_artworkByURL;
    NSMutableArray *_artworkLoadOperations;
}

@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copyDefaultContext;

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (id)_artworkImageForURL:(id)a0 dataProvider:(id)a1;
- (id)artworkImageForItemImage:(id)a0;
- (id)artworkImageForURL:(id)a0;
- (void)cancelArtworkRequests;
- (id)copyImageDataProvider;
- (void)reloadAfterArtworkLoad;

@end
