@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject {
    IMMultiDict *_reusablePluginViewsByClassName;
    NSMutableDictionary *_pluginViewToReuseDelegateMap;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetState;
- (void)didReceiveMemoryWarning;
- (void)enqueuePluginViewForReuse:(id)a0;
- (BOOL)_objectSupportsPluginViewReuse:(id)a0;
- (void)_registerPluginView:(id)a0 withReuseDelegate:(id)a1;
- (id)_pointerKeyForPluginView:(id)a0;
- (id)dequeuePluginViewForBalloonController:(id)a0;

@end
