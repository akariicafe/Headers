@class FBSSceneSnapshotRequestAction, FBSSceneSnapshotContext;

@interface FBSSceneSnapshotRequestHandle : NSObject {
    unsigned long long _type;
    FBSSceneSnapshotContext *_context;
    FBSSceneSnapshotRequestAction *_action;
    BOOL _canceled;
}

+ (id)handleForRequestType:(unsigned long long)a0 context:(id)a1;

- (id)initWithRequestType:(unsigned long long)a0 context:(id)a1;
- (void)_clearAction;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)performRequestForScene:(id)a0;

@end
