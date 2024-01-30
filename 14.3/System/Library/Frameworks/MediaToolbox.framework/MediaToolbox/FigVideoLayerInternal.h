@class NSObject;
@protocol OS_dispatch_queue;

@interface FigVideoLayerInternal : NSObject {
    BOOL isPresentationLayer;
    BOOL visible;
    struct OpaqueFigSimpleMutex { } *serializationMutex;
    NSObject<OS_dispatch_queue> *notificationSerialQueue;
}

@end
