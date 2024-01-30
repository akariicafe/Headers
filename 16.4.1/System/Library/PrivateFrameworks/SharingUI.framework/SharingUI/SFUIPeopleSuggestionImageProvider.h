@class SFUIAvatarImageRenderer, UIImage;

@interface SFUIPeopleSuggestionImageProvider : SFUIImageProvider

@property (readonly, nonatomic) SFUIAvatarImageRenderer *imageRenderer;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) unsigned long long layoutDirection;

- (void).cxx_destruct;
- (id)initWithTargetSize:(struct CGSize { double x0; double x1; })a0 layoutDirection:(unsigned long long)a1;
- (int)requestAvatarImageForPeopleSuggestion:(id)a0 resultHandler:(id /* block */)a1;
- (int)requestTransportImageForPeopleSuggestion:(id)a0 resultHandler:(id /* block */)a1;
- (void)_deliverIconImage:(id)a0 identifier:(id)a1 error:(id)a2;
- (void)_fetchAvatarImageForPeopleSuggestion:(id)a0;
- (void)_fetchTransportImageForPeopleSuggestion:(id)a0;
- (void)performImageRequest:(id)a0;

@end
