@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject {
    IMMultiDict *_reusablePluginViewsByClassName;
    NSMutableDictionary *_pluginViewToReuseDelegateMap;
}

+ (id)sharedInstance;

- (void)resetState;
- (void)didReceiveMemoryWarning;
- (BOOL)_objectSupportsPluginViewReuse:(id)a0;
- (void)_registerPluginView:(id)a0 withReuseDelegate:(id)a1;
- (id)_pointerKeyForPluginView:(id)a0;
- (id)dequeuePluginViewForBalloonController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)enqueuePluginViewForReuse:(id)a0;
- (void)dealloc;

@end
