@class NSURL;

@interface PGGraphUpdateJetsamIndicator : NSObject

@property (readonly, nonatomic) NSURL *indicatorURL;
@property (nonatomic) long long retryCount;
@property (nonatomic) BOOL indicatorExists;
@property (nonatomic) long long maxRetryCount;
@property (readonly, nonatomic) BOOL updateDidCauseJetsam;

- (void)clear;
- (void)_removeIndicator;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)markUpdate;
- (id)description;
- (void)_readIndicator;
- (id)initWithIndicatorDirectoryURL:(id)a0;

@end
