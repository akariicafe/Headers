@class UIImageView, UIView;

@interface _UIBarBackgroundImageView : UIImageView {
    UIView *_topStripView;
    UIImageView *_customImageContainer;
}

@property (nonatomic, getter=isTranslucent) BOOL translucent;

- (void).cxx_destruct;
- (void)updateTopStripViewCreateIfNecessary;
- (id)topStripView;
- (void)removeTopStripView;
- (void)setImage:(id)a0;
- (id)image;

@end
