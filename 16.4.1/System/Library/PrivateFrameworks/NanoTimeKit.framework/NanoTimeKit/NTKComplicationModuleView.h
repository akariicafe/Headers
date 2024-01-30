@class NSString;
@protocol CDComplicationDisplayObserver;

@interface NTKComplicationModuleView : NTKModuleView <CDComplicationDisplay>

@property (nonatomic) BOOL isXL;
@property (weak, nonatomic) id<CDComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_modularSmallAlarmImageProvider;
+ (id)_extraLargeAlarmImageProvider;
+ (id)_extraLargeStopwatchImageProviderForDevice:(id)a0;
+ (id)_imageProviderForImageSymbolName:(id)a0 imageAssetNamePrefix:(id)a1;
+ (id)_modularSmallStopwatchImageProviderForDevice:(id)a0;
+ (id)largeModuleViewForComplicationType:(unsigned long long)a0;
+ (long long)layoutOverride;
+ (id)smallModuleViewForComplicationType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)_attributeEnDashesWithinString:(id)a0 typographicTracking:(double)a1 baseFont:(id)a2;
- (id)_attributedStringWithText:(id)a0 typographicTracking:(double)a1 baseFont:(id)a2;
- (id)_newImageViewSubview;
- (id)_newLabelSubview;
- (id)_newLabelSubviewWithFont:(id)a0;
- (void)_setTypographicTracking:(double)a0 andFont:(id)a1 onAttributedString:(id *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end
