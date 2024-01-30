@class NSString, NSAttributedString;
@protocol HRFeatureRegulatoryReenableFeatureActionDelegate;

@interface HRFeatureRegulatoryReenableFeatureItem : NSObject <HRFeatureRegulatoryPanelDisplayable>

@property (nonatomic) NSString *productName;
@property (weak, nonatomic) id<HRFeatureRegulatoryReenableFeatureActionDelegate> delegate;
@property (readonly, copy, nonatomic) NSAttributedString *titleString;
@property (readonly, copy, nonatomic) NSAttributedString *valueString;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) long long cellAccessoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleUserInteractionWithItemWithHostViewController:(id)a0;
- (id)initWithProductName:(id)a0 delegate:(id)a1;

@end
