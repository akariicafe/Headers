@class NSString;
@protocol NTKComplicationDisplayObserver;

@interface NTKComplicationModuleView : NTKModuleView <NTKComplicationDisplay>

@property (nonatomic) BOOL isXL;
@property (weak, nonatomic) id<NTKComplicationDisplayObserver> displayObserver;
@property (nonatomic) BOOL canUseCurvedText;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)smallModuleViewForComplicationType:(unsigned long long)a0;
+ (id)_modularSmallStopwatchImageProvider;
+ (id)_extraLargeStopwatchImageProvider;
+ (id)largeModuleViewForComplicationType:(unsigned long long)a0;
+ (id)_modularSmallAlarmImageProvider;
+ (id)_extraLargeAlarmImageProvider;
+ (id)_modularSmallTimerImageProvider;
+ (id)_extraLargeTimerImageProvider;

- (void).cxx_destruct;
- (id)_newLabelSubviewWithFont:(id)a0;
- (id)_newLabelSubview;
- (void)_setTypographicTracking:(double)a0 andFont:(id)a1 onAttributedString:(id *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)_newImageViewSubview;
- (id)_attributeEnDashesWithinString:(id)a0 typographicTracking:(double)a1 baseFont:(id)a2;
- (id)_attributedStringWithText:(id)a0 typographicTracking:(double)a1 baseFont:(id)a2;

@end
