@class NSArray, NSString, UIImage, CALayer, NSLayoutConstraint, DOCTag;

@interface DOCTagDotView : UIView <DOCTagIconView>

@property (readonly, nonatomic) double defaultTagDimension;
@property (readonly, nonatomic) NSLayoutConstraint *tagDimensionConstraint;
@property (readonly, nonatomic) BOOL needsItemTagImageUpdate;
@property (retain, nonatomic) UIImage *itemTagImage;
@property (readonly, nonatomic) CALayer *dotLayer;
@property (readonly, nonatomic) CALayer *checkmarkLayer;
@property (readonly, nonatomic) NSArray *notificationObservances;
@property (readonly, nonatomic) double tagDimension;
@property (readonly, nonatomic) BOOL adjustsSizeForContentSizeCategory;
@property (nonatomic) BOOL checked;
@property (retain, nonatomic) DOCTag *itemTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSublayersOfLayer:(id)a0;
- (void)dealloc;
- (void)updateContents;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateSizeConstraint;
- (id)initWithDefaultTagDimension:(double)a0 adjustsSizeForContentSizeCategory:(BOOL)a1;
- (void)loadItemTagImageIfNecessary;
- (void)setNeedsItemTagImageUpdate;
- (void)updateLayoutOfLayers;

@end
