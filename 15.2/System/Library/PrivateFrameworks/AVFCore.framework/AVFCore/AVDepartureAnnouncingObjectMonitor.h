@class AVWeakReference;

@interface AVDepartureAnnouncingObjectMonitor : NSObject {
    AVWeakReference *_weakReferenceToMonitoringObject;
}

+ (void)attachDepartureAnnouncingObjectMonitorToObject:(id)a0 monitoringObject:(id)a1;

- (id)initWithMonitoringObject:(id)a0;
- (void)dealloc;

@end
