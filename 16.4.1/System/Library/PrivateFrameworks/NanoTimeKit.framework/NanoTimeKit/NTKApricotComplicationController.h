@class NTKApricotComplication, NSMapTable;

@interface NTKApricotComplicationController : NTKComplicationController {
    NTKApricotComplication *_apricotComplication;
    NSMapTable *_displayWrapperToShowPreview;
}

+ (BOOL)_isLegacy;
+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 family:(long long)a1 forDevice:(id)a2;

- (void).cxx_destruct;
- (void)addDisplayWrapper:(id)a0;
- (id)complicationApplicationIdentifier;
- (void)didTouchUpInsideView:(id)a0;
- (BOOL)hasTapAction;
- (id)initWithComplication:(id)a0 family:(long long)a1 face:(id)a2 slot:(id)a3;
- (void)removeDisplayWrapper:(id)a0;
- (Class)richComplicationDisplayViewClass;
- (void)setDataMode:(long long)a0 forDisplayWrapper:(id)a1;
- (void)setShowPreview:(BOOL)a0 forDisplayWrapper:(id)a1;
- (BOOL)showPreviewForDisplayWrapper:(id)a0;
- (BOOL)wantsLegacyDisplay;

@end
