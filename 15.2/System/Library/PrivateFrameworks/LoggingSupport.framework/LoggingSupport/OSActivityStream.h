@class OSLogDevice, _OSLogStreamFilter, NSMutableSet, NSCompoundPredicate;
@protocol OSDeviceDelegate, OSActivityStreamDelegate;

@interface OSActivityStream : NSObject {
    struct os_activity_stream_s { } *_stream;
    NSMutableSet *_pids;
    void *_deviceSearchSession;
    void *_deviceEventSession;
    BOOL _delegateStreamErrorLess;
    BOOL _delegateStreamWithError;
    BOOL _delegateHasDidFail;
    _OSLogStreamFilter *_streamFilter;
}

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long eventFilter;
@property (nonatomic) unsigned long long events;
@property (weak, nonatomic) id<OSActivityStreamDelegate> delegate;
@property (copy, nonatomic) NSCompoundPredicate *predicate;
@property (weak, nonatomic) id<OSDeviceDelegate> deviceDelegate;
@property (retain, nonatomic) OSLogDevice *device;

- (void)addProcessID:(int)a0;
- (id)initWithDevice:(void *)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)stopLocal;
- (BOOL)streamEvent:(id)a0 error:(id)a1;
- (void)startRemote;
- (void)startLocal;
- (void)stopRemote;
- (id)getInfoForDevice:(id)a0 andKey:(id)a1;
- (BOOL)establishTrust:(id)a0;

@end
