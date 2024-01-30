@class NSString, NSMutableDictionary, NSObject, HDQueryServerClientState;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface _HDProcessQueryCollection : NSObject {
    NSMutableDictionary *_queryServersByUUID;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_processBundleIdentifier;
    HDQueryServerClientState *_clientState;
}

- (void).cxx_destruct;

@end
