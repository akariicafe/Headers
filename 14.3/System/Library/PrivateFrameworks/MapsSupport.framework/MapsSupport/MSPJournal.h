@class NSString, NSISO8601DateFormatter, NSFileHandle, NSObject;
@protocol OS_dispatch_queue, MSPJournaling;

@interface MSPJournal : NSObject {
    NSString *_path;
    NSFileHandle *_writeHandle;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSISO8601DateFormatter *_dateFormatter;
    BOOL _analyticsEnabled;
    BOOL _loggingEnabled;
    BOOL _journalEnabled;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *path;
@property (weak, nonatomic) id<MSPJournaling> delegate;

- (void)noteChangeWithState:(id)a0 error:(id)a1;
- (id)filename;
- (id)initWithName:(id)a0 options:(unsigned long long)a1;
- (void)rotateLogIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;
- (void)noteChangeWithState:(id)a0 format:(id)a1;
- (void)appendToLog:(id)a0 format:(id)a1;
- (void)sendTelemetryForState:(id)a0 affectedObject:(id)a1;
- (void)noteChangeWithState:(id)a0 affectedObject:(id)a1;
- (void)noteChangeWithState:(id)a0 payload:(id)a1;
- (void)appendToJournal:(id)a0 format:(id)a1;
- (id)initWithName:(id)a0;
- (void)noteChangeWithState:(id)a0;
- (id)rotatedPath;

@end
