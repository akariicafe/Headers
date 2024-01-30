@class NSString, NTKFaceView, CLKDevice;
@protocol NTKUtilityFlatComplicationViewDelegate;

@interface NTKSimpleTextFaceViewComplicationFactory : NSObject <NTKFaceViewComplicationFactory>

@property (retain, nonatomic) CLKDevice *device;
@property (weak, nonatomic) NTKFaceView<NTKUtilityFlatComplicationViewDelegate> *faceView;
@property (nonatomic) double verticalCenterOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceFrame;
- (long long)complicationPickerStyleForSlot:(id)a0;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1;
- (id)keylineViewForComplicationSlot:(id)a0;
- (void)loadLayoutRules;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;

@end
