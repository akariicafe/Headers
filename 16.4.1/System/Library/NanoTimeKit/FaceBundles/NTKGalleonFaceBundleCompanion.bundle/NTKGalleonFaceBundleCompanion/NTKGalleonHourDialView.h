@class NSString, NTKGalleonRasterizableProgressView;

@interface NTKGalleonHourDialView : UIView <NTKGalleonProgressSettable, NTKGalleonNightModeSupporting> {
    NTKGalleonRasterizableProgressView *_labelView;
    NTKGalleonRasterizableProgressView *_labelTickView;
    NTKGalleonRasterizableProgressView *_majorTickView;
    NTKGalleonRasterizableProgressView *_minorTickView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_newLabelView;

@end
