@class NSString, NSMutableDictionary, UIImage, NTKComplication, NSMutableSet, NTKComplicationDisplayWrapperView;
@protocol NTKComplicationPickerViewDataSource;

@interface NTKComplicationPickerView : NTKEditOptionPickerView {
    NSMutableSet *_loadedComplications;
    NSMutableDictionary *_displaysByComplication;
    NSMutableDictionary *_controllersByComplication;
    NSMutableDictionary *_layoutRulesByComplication;
    BOOL _needsReload;
}

@property (nonatomic) long long style;
@property (weak, nonatomic) id<NTKComplicationPickerViewDataSource> dataSource;
@property (readonly, nonatomic) double curvedRadius;
@property (readonly, nonatomic) double curvedAngle;
@property (readonly, nonatomic) BOOL curvedInterior;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } curvedCenter;
@property (retain, nonatomic) UIImage *maskImage;
@property (readonly, nonatomic) NSString *complicationSlot;
@property (readonly, nonatomic) NTKComplication *selectedComplication;
@property (readonly, nonatomic) NTKComplicationDisplayWrapperView *selectedComplicationDisplay;

- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (void)layoutSubviews;
- (id)_displayByLoadingComplication:(id)a0;
- (void)_detachComplicationDisplays;
- (id)_newContainerView;
- (void)_loadComplication:(id)a0;
- (void)_reloadLayoutForComplication:(id)a0;
- (id)initWithAllowedComplications:(id)a0 selectedComplication:(id)a1 complicationSlot:(id)a2;
- (void)setCurvedRadius:(double)a0 curvedAngle:(double)a1 curvedCenter:(struct CGPoint { double x0; double x1; })a2 curvedInterior:(BOOL)a3;
- (id)complicationAtIndex:(unsigned long long)a0;
- (void)stealSelectedComplicationDisplay:(id *)a0 controller:(id *)a1;
- (Class)_sideViewClass;
- (void)_willDisplaySideView:(id)a0;
- (void)_configureSideView:(id)a0 forOption:(id)a1;

@end
