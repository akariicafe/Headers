@class IMMultiDict, NSMutableDictionary;

@interface CKTranscriptPluginViewManager : NSObject {
    IMMultiDict *_reusablePluginViewsByClassName;
    NSMutableDictionary *_pluginViewToReuseDelegateMap;
}

+ (id)sharedInstance;

- (void)resetState;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_objectSupportsPluginViewReuse:(id)a0;
- (id)_pointerKeyForPluginView:(id)a0;
- (void)_registerPluginView:(id)a0 withReuseDelegate:(id)a1;
- (id)dequeuePluginViewForBalloonController:(id)a0;
- (void)enqueuePluginViewForReuse:(id)a0;

@end
