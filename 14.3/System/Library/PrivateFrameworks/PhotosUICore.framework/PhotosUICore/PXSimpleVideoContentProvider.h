@class NSString, PXVideoContentProviderLoadingResult;

@interface PXSimpleVideoContentProvider : PXVideoContentProvider {
    PXVideoContentProviderLoadingResult *_loadingResult;
    NSString *_contentIdentifier;
    double _loadingProgress;
}

- (double)loadingProgress;
- (id)init;
- (void).cxx_destruct;
- (id)contentIdentifier;
- (id)description;
- (id)loadingResult;
- (void)setLoadingProgress:(double)a0;
- (void)beginLoadingWithPriority:(long long)a0;
- (id)initWithPlayerItem:(id)a0 contentIdentifier:(id)a1;
- (void)setLoadingResult:(id)a0;

@end
