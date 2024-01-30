@class AVContentKeySession, NSMutableSet, NSMutableArray;

@interface FCAVAssetKeyFetchRequest : NSObject {
    BOOL _forceRefresh;
    AVContentKeySession *_contentKeySession;
    NSMutableSet *_remainingKeyURIs;
    NSMutableArray *_errorsEncountered;
    id /* block */ _completionHandler;
}

- (void).cxx_destruct;

@end
