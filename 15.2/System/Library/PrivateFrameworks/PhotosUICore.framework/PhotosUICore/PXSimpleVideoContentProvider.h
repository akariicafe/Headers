@class NSString, PXVideoContentProviderLoadingResult;

@interface PXSimpleVideoContentProvider : PXVideoContentProvider {
    PXVideoContentProviderLoadingResult *_loadingResult;
    NSString *_contentIdentifier;
    double _loadingProgress;
}

- (id)contentIdentifier;
- (double)loadingProgress;
- (id)description;
- (id)loadingResult;
- (void).cxx_destruct;
- (void)setLoadingProgress:(double)a0;
- (id)init;
- (void)beginLoadingWithPriority:(long long)a0;
- (id)initWithPlayerItem:(id)a0 contentIdentifier:(id)a1;
- (void)setLoadingResult:(id)a0;

@end
