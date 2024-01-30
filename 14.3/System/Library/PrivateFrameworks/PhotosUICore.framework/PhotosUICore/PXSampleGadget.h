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
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
