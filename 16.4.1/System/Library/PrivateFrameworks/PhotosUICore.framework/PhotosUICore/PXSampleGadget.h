@class UIColor, NSString, PXGadgetSpec;
@protocol PXGadgetDelegate;

@interface PXSampleGadget : NSObject <PXSampleGadgetViewDelegate, PXGadget>

@property (nonatomic) unsigned long long preferredHeight;
@property (nonatomic) unsigned long long preferredExpandedHeight;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL expanded;
@property (copy, nonatomic) NSString *gadgetTitle;
@property (nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)_prepareView:(id)a0;
- (id)initWithMininumHeight:(double)a0;
- (void)prepareCollectionViewItem:(id)a0;
- (void)userDidSelectAccessoryButton:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })view:(id)a0 colorFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
