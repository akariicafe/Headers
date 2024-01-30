@class SUDOMElement, UIBarButtonItem;

@interface SUScriptPopOverNativeObject : SUScriptNativeObject {
    BOOL _redisplayAfterRotation;
}

@property (retain, nonatomic) UIBarButtonItem *sourceButtonItem;
@property (retain, nonatomic) SUDOMElement *sourceDOMElement;

- (void)dealloc;
- (void)destroyNativeObject;
- (void)_windowDidRotateNotification:(id)a0;
- (void)_windowWillRotateNotification:(id)a0;
- (void)setupNativeObject;
- (BOOL)_isAffectedByWindowNotification:(id)a0;

@end
