@class CKNetworkImageSpecifier;

@interface CKNetworkImageComponentView : UIImageView {
    BOOL _inReusePool;
    id _download;
}

@property (retain, nonatomic) CKNetworkImageSpecifier *specifier;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didEnterReusePool;
- (void)willLeaveReusePool;
- (void)didDownloadImage:(struct CGImage { } *)a0 error:(id)a1;
- (void)_startDownloadIfNotInReusePool;
- (void)updateContentsRect;

@end
