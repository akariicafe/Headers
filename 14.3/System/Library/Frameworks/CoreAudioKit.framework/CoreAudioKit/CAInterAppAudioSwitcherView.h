@class CAIAANodeContainer, NSString, UIPageControl, NSTimer, CAIAANodeInfo;

@interface CAInterAppAudioSwitcherView : UIView <UIScrollViewDelegate> {
    struct OpaqueAudioComponentInstance { } *outputUnit;
    CAIAANodeContainer *nodeView;
    UIPageControl *pageControl;
    CAIAANodeInfo *info;
    NSTimer *refreshTimer;
    BOOL showingAppNames;
    BOOL isHostConnected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isShowingAppNames) BOOL showingAppNames;

- (void)initialize;
- (void)removeFromSuperview;
- (void)startTimer;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (double)contentWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)audioUnitPropertyChangedListener:(void *)a0 unit:(struct OpaqueAudioComponentInstance { } *)a1 propID:(unsigned int)a2 scope:(unsigned int)a3 element:(unsigned int)a4;
- (void)appHasGoneInBackground;
- (void)appHasGoneForeground;
- (BOOL)isHostConnected;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0;
- (void)updateInfo;
- (void)nodePressed:(id)a0;
- (void)changePage:(id)a0;
- (void)updateNodeList;

@end
