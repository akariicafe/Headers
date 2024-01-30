@class NSString, PXVideoContentProviderLoadingResult;

@interface PXSimpleVideoContentProvider : PXVideoContentProvider {
    PXVideoContentProviderLoadingResult *_loadingResult;
    NSString *_contentIdentifier;
    double _loadingProgress;
}

- (double)loadingProgress;
- (void)setLoadingProgress:(double)a0;
- (id)contentIdentifier;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)beginLoadingWithPriority:(long long)a0;
- (id)initWithPlayerItem:(id)a0 contentIdentifier:(id)a1;
- (id)loadingResult;
- (void)setLoadingResult:(id)a0;

@end
