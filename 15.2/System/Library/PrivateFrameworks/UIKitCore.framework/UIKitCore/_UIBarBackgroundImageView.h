@class UIImageView, UIView;

@interface _UIBarBackgroundImageView : UIImageView {
    UIView *_topStripView;
    UIImageView *_customImageContainer;
}

@property (nonatomic, getter=isTranslucent) BOOL translucent;

- (void)removeTopStripView;
- (id)topStripView;
- (void).cxx_destruct;
- (void)updateTopStripViewCreateIfNecessary;
- (id)image;
- (void)setImage:(id)a0;

@end
