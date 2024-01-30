@class _TtC14BookFoundation12MResourceSet, NSString, NSArray, NSURL, NSError;

@interface BFMSeriesBase : BCMResource <BFMSeries>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL isOrdered;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSArray *_assets;
@property (nonatomic, readonly) _TtC14BookFoundation12MResourceSet *assetsResourceSet;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) BOOL isBookSeries;
@property (nonatomic, readonly) BOOL isAudiobookSeries;

- (void)fetchAllAssetsWithCompletionHandler:(void (^)(NSError *))a0;
- (void)fetchNextAssetsWithCompletionHandler:(void (^)(NSError *))a0;

@end
