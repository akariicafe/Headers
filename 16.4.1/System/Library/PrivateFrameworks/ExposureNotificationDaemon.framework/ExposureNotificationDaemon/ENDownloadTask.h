@class NSString, NSBackgroundActivityScheduler, ENDownloadEndpointState, NSDate, NSObject;
@protocol OS_dispatch_group;

@interface ENDownloadTask : NSObject {
    NSObject<OS_dispatch_group> *_group;
    NSBackgroundActivityScheduler *_scheduler;
    BOOL _finished;
}

@property (readonly, nonatomic) ENDownloadEndpointState *endpointState;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL shouldDefer;
@property (readonly, nonatomic) BOOL didDefer;
@property (readonly, nonatomic) unsigned long long downloadCount;
@property (readonly, copy, nonatomic) NSString *shortIdentifier;

+ (id)taskWithEndpointState:(id)a0 date:(id)a1 group:(id)a2 scheduler:(id)a3;

- (void).cxx_destruct;
- (void)finishDeferred:(BOOL)a0 error:(id)a1;
- (void)incrementDownloadCount;

@end
