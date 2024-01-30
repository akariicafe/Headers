@class NSObject;
@protocol OS_dispatch_queue;

@interface CMSensorRecorderInternal : NSObject {
    NSObject<OS_dispatch_queue> *fInternalQueue;
    struct CLConnectionClient { id x0; struct CLCallbackDropManager { void /* function */ **x0; struct shared_ptr<int> { int *x0; struct __shared_weak_count *x1; } x1; } x1; struct shared_ptr<CLConnectionClientInternal> { struct CLConnectionClientInternal *x0; struct __shared_weak_count *x1; } x2; struct CLConnectionClientNotificationContext *x3; } *fLocationdConnection;
}

- (id)newMetaSinceID:(unsigned long long)a0 forType:(int)a1;
- (id)newMetaFrom:(double)a0 to:(double)a1 forType:(int)a2;
- (id)newMetaByID:(unsigned long long)a0 forType:(int)a1;
- (void)teardown;
- (id)newDataByID:(unsigned long long)a0 metaID:(unsigned long long)a1 forType:(int)a2;
- (id)_newMetaUsingMessage:(const char *)a0 withIdentifier:(unsigned long long)a1 forType:(int)a2;
- (BOOL)writeSensorDataToFile:(id)a0 from:(double)a1 to:(double)a2 forType:(int)a3;
- (BOOL)setSensorSampleRate:(unsigned int)a0 forType:(int)a1;
- (id)init;
- (void)dealloc;

@end
