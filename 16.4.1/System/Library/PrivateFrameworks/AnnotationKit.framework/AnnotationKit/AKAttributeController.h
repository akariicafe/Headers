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
+ (id)defaultFont;
+ (id)defaultTextAttributes;

- (id)initWithController:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)toggleRuler;
- (void)forceHideRuler;
- (void)restoreStrokeColorToSystemDefault;
- (BOOL)strokeColorIsEqualTo:(id)a0;
- (void)_allAnnotations:(id)a0 all:(BOOL *)a1 atLeastOneShare:(BOOL *)a2 attributeFromTag:(long long)a3;
- (BOOL)_isEnabledForSender:(id)a0 segment:(long long)a1 withSelectedAnnotations:(id)a2;
- (void)_persistCurrentAttributes;
- (void)_restorePersistedAttributes;
- (void)_syncAttributesFromSelectedAnnotationsToUI;
- (void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)a0 segment:(long long)a1;
- (void)_updateInk;
- (void)_updateStateOnSender:(id)a0 segment:(long long)a1;
- (BOOL)_updateStateOnSender:(id)a0 segment:(long long)a1 fromSelectedAnnotations:(id)a2;
- (void)_updateStateOnSenderFromSelf:(id)a0 segment:(long long)a1;
- (void)annotationEditingDidEndWithCompletion:(id /* block */)a0;
- (BOOL)isAttributeSenderEnabled:(id)a0 segment:(long long)a1;
- (void)performAttributeActionForSender:(id)a0 segment:(long long)a1;
- (void)resetToLastDrawingInk;
- (void)setDefaultInk;
- (void)syncFillColorOnSelectionToUI;
- (void)syncStrokeColorOnSelectionToUI;
- (void)updateAttributeSenderState:(id)a0 segment:(long long)a1 enabled:(BOOL)a2;
- (void)updateInkIfNeeded:(id)a0;

@end
