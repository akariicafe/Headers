@class NSString;

@interface SUScriptActivityNativeObject : SUScriptNativeObject <SUActivityDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)destroyNativeObject;
- (void)setupNativeObject;
- (BOOL)activity:(id)a0 canPerformWithActivityItems:(id)a1;
- (void)activity:(id)a0 prepareWithActivityItems:(id)a1;
- (void)performActionForActivity:(id)a0;

@end
