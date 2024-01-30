@class SUDOMElement, UIBarButtonItem;

@interface SUScriptPopOverNativeObject : SUScriptNativeObject {
    BOOL _redisplayAfterRotation;
}

@property (retain, nonatomic) UIBarButtonItem *sourceButtonItem;
@property (retain, nonatomic) SUDOMElement *sourceDOMElement;

- (void)dealloc;
- (BOOL)_isAffectedByWindowNotification:(id)a0;
- (void)_windowDidRotateNotification:(id)a0;
- (void)_windowWillRotateNotification:(id)a0;
- (void)destroyNativeObject;
- (void)setupNativeObject;

@end
