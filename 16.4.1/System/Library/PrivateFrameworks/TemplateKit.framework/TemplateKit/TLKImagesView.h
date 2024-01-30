@class NSArray, NUIContainerFlowView, NSString, NSMutableArray;
@protocol TLKImagesViewDelegate;

@interface TLKImagesView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) NSMutableArray *imageButtons;
@property (retain, nonatomic) NUIContainerFlowView *contentView;
@property (weak, nonatomic) id<TLKImagesViewDelegate> delegate;
@property (retain, nonatomic) NSArray *images;
@property (nonatomic, getter=isPaddingDisabled) BOOL paddingDisabled;
@property (nonatomic, getter=isSelectionEnabled) BOOL selectionEnabled;
@property (nonatomic) BOOL useGridAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleTap:(id)a0;
- (void)_updateImages;
- (void).cxx_destruct;
- (void)_updateSpacing;
- (id)imageViewAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (BOOL)usesDefaultLayoutMargins;

@end
