@class IKJSInspectorController, NSString, NSMutableDictionary, RWIProtocolCSSStyleSheetHeader, NSMapTable, IKViewElementStyleFactory;

@interface IKJSInspectorCSSAgent : NSObject <RWIProtocolCSSDomainHandler> {
    NSMutableDictionary *_inlineStyleMap;
    RWIProtocolCSSStyleSheetHeader *_templateStylesheetHeader;
    IKViewElementStyleFactory *_styleFactory;
    NSMapTable *_authorStylesheets;
}

@property (readonly, weak, nonatomic) IKJSInspectorController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_evaluator:(id)a0 updateMediaStylesWithActiveStyles:(id)a1 inActiveStyles:(id)a2 defaultStyles:(id)a3 forRule:(id)a4 withMatch:(id)a5;

- (void).cxx_destruct;
- (id)_stylesheetBodyForStylesheetId:(id)a0;
- (void)getInlineStylesForNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (id)_getMatchedStyleRulesForNode:(id)a0;
- (id)_getMatchedTemplateStylesForNode:(id)a0;
- (id)_styleNodeForStylesheetId:(id)a0;
- (id)_updatedInlineStyleForNode:(int)a0 withStyleString:(id)a1;
- (void)disableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)enableWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)getAllStyleSheetsWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (void)getComputedStyleForNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2;
- (void)getMatchedStylesForNodeWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 nodeId:(int)a2 includePseudo:(BOOL *)a3 includeInherited:(BOOL *)a4;
- (void)getStyleSheetTextWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 styleSheetId:(id)a2;
- (void)getStyleSheetWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 styleSheetId:(id)a2;
- (void)getSupportedCSSPropertiesWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1;
- (id)initWithInspectorController:(id)a0;
- (void)mediaQueryResultDidChange;
- (void)resetStylesFromNode:(id)a0;
- (void)setStyleSheetTextWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 styleSheetId:(id)a2 text:(id)a3;
- (void)setStyleTextWithErrorCallback:(id /* block */)a0 successCallback:(id /* block */)a1 styleId:(id)a2 text:(id)a3;
- (void)updateStylesheets;

@end
