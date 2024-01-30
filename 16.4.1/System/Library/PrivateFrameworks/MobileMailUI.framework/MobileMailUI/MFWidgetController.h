@class NSString, CHSTimelineController, NSObject;
@protocol OS_os_log, EFScheduler;

@interface MFWidgetController : NSObject <EFLoggable, EFSignpostable>

@property (class, readonly, nonatomic) id<EFScheduler> scheduler;
@property (class, readonly, nonatomic) MFWidgetController *sharedController;
@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (retain, nonatomic) CHSTimelineController *timelineController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

- (id)init;
- (void).cxx_destruct;
- (void)reloadTimelinesWithReason:(id)a0;

@end
