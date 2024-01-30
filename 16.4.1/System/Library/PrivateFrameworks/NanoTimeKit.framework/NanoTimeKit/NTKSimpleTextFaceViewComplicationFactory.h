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

- (id)init;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceFrame;
- (void)loadLayoutRules;
- (long long)complicationPickerStyleForSlot:(id)a0;
- (id)keylineViewForComplicationSlot:(id)a0;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;

@end
