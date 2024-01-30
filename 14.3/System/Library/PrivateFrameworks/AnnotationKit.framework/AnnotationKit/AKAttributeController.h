@class UIColor, AKController, UIFont, NSDictionary, AKPageModelController, PKInk;

@interface AKAttributeController : NSObject

@property (weak) AKController *controller;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain) UIColor *fillColor;
@property (retain, nonatomic) PKInk *ink;
@property double strokeWidth;
@property BOOL strokeIsDashed;
@property BOOL hasShadow;
@property long long brushStyle;
@property unsigned long long arrowHeadStyle;
@property (retain) UIFont *font;
@property (retain) NSDictionary *textAttributes;
@property (retain, nonatomic) AKPageModelController *modelControllerToObserveForSelections;
@property (nonatomic) long long highlightStyle;

+ (void)initialize;
+ (id)defaultTextAttributes;
+ (id)defaultFont;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)toggleRuler;
- (void)annotationEditingDidEndWithCompletion:(id /* block */)a0;
- (void)forceHideRuler;
- (void)setDefaultInk;
- (void)_restorePersistedAttributes;
- (void)_syncAttributesFromSelectedAnnotationsToUI;
- (void)_updateInk;
- (void)_persistCurrentAttributes;
- (void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)a0 segment:(long long)a1;
- (BOOL)_isEnabledForSender:(id)a0 segment:(long long)a1 withSelectedAnnotations:(id)a2;
- (void)_updateStateOnSender:(id)a0 segment:(long long)a1;
- (void)updateInkIfNeeded:(id)a0;
- (void)syncFillColorOnSelectionToUI;
- (void)syncStrokeColorOnSelectionToUI;
- (BOOL)_updateStateOnSender:(id)a0 segment:(long long)a1 fromSelectedAnnotations:(id)a2;
- (void)_updateStateOnSenderFromSelf:(id)a0 segment:(long long)a1;
- (void)_allAnnotations:(id)a0 all:(BOOL *)a1 atLeastOneShare:(BOOL *)a2 attributeFromTag:(long long)a3;
- (void)performAttributeActionForSender:(id)a0 segment:(long long)a1;
- (BOOL)isAttributeSenderEnabled:(id)a0 segment:(long long)a1;
- (void)updateAttributeSenderState:(id)a0 segment:(long long)a1 enabled:(BOOL)a2;
- (BOOL)strokeColorIsEqualTo:(id)a0;
- (void)restoreStrokeColorToSystemDefault;
- (void)resetToLastDrawingInk;

@end
