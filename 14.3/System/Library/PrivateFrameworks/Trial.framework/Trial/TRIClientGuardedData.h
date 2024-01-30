@class NSMutableDictionary, NSMutableSet, TRITrackingId;

@interface TRIClientGuardedData : NSObject {
    TRITrackingId *trackingId;
    NSMutableSet *updatedNamespaceNames;
    NSMutableDictionary *namespaceUpdateHandlerTokens;
    NSMutableDictionary *namespaceCallbacks;
}

- (void).cxx_destruct;

@end
