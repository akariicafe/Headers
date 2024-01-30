@class UIImageView, UIView;

@interface _UIBarBackgroundImageView : UIImageView {
    UIView *_topStripView;
    UIImageView *_customImageContainer;
}

@property (nonatomic, getter=isTranslucent) BOOL translucent;

- (void)updateTopStripViewCreateIfNecessary;
- (void)setImage:(id)a0;
- (void)removeTopStripView;
- (id)topStripView;
- (id)image;
- (void).cxx_destruct;

@end
