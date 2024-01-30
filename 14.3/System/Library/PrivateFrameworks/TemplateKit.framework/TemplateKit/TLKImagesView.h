@class NSArray, NUIContainerGridView, NSString, NSMutableArray;
@protocol TLKImagesViewDelegate;

@interface TLKImagesView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) NSMutableArray *imageButtons;
@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (weak, nonatomic) id<TLKImagesViewDelegate> delegate;
@property (retain, nonatomic) NSArray *images;
@property (nonatomic, getter=isPaddingDisabled) BOOL paddingDisabled;
@property (nonatomic, getter=isSelectionEnabled) BOOL selectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)rowCountForImageCount:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_updateImages;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (BOOL)usesDefaultLayoutMargins;
- (void)_updateSpacing;
- (void)_handleTap:(id)a0;
- (void)_invalidateLayout;

@end
