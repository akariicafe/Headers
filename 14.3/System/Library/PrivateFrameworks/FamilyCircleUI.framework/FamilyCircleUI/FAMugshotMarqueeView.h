@class FAProfilePictureStore, NSMutableDictionary, UIStackView;

@interface FAMugshotMarqueeView : UIView {
    NSMutableDictionary *_memberPhotoMap;
    FAProfilePictureStore *_pictureStore;
    UIStackView *_marquee;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_configureStackView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureMarquee;
- (void)_profilePictureStoreDidReloadImages:(id)a0;
- (id)_configureImageWithData:(id)a0;
- (id)_configureImageViewWithImage:(id)a0;
- (id)initWithFamilyCircle:(id)a0 profilePictureStore:(id)a1;

@end
