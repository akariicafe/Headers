@class NSString, NSTimer, UIImage, CCUICAPackageView;

@interface MRUActivityArtworkView : MRUArtworkView

@property (retain, nonatomic) NSString *artworkIdentifier;
@property (nonatomic) BOOL currentItemHasChangedSinceArtworkLastSet;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic, getter=isTransitioning) BOOL transitioning;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) NSString *currentStateName;
@property (retain, nonatomic) NSTimer *emptyTimer;
@property (retain, nonatomic) UIImage *emptyImage;
@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (nonatomic, getter=isPlaying) BOOL playing;

- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)setArtworkImage:(id)a0;
- (id)init;
- (id)description;
- (double)artworkLoadingTimeout;
- (void).cxx_destruct;
- (void)setCurrentImage:(id)a0 animated:(BOOL)a1;
- (void)transitionToImage:(id)a0;
- (void)updatePackageState;

@end
