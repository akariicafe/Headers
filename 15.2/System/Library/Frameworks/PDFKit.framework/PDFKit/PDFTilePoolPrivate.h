@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PDFTilePoolPrivate : NSObject {
    NSObject<OS_dispatch_queue> *workQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } surfacesLock;
    NSMutableDictionary *surfaces;
    int surfaceType;
}

- (void).cxx_destruct;

@end
