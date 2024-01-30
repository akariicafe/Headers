@class NSArray, NSString, NSObject;
@protocol OS_os_log;

@interface MRLogBuffer : NSObject

@property (retain, nonatomic) NSArray *history;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) long long capacity;
@property (readonly, nonatomic) NSObject<OS_os_log> *category;
@property (readonly, nonatomic) NSString *prefix;

+ (id)bufferWithCapacity:(long long)a0 category:(id)a1 loggingPrefix:(id)a2;

- (void)log:(id)a0;
- (void)logError:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)logInfo:(id)a0;
- (id)initWithCapacity:(long long)a0 category:(id)a1 prefix:(id)a2;
- (void)log:(id)a0 withType:(unsigned char)a1 capture:(BOOL)a2;
- (void)logDebug:(id)a0;
- (void)logDebugWithoutCapture:(id)a0;
- (void)logErrorWithoutCapture:(id)a0;
- (void)logFault:(id)a0;
- (void)logFaultWithoutCapture:(id)a0;
- (void)logInfoWithoutCapture:(id)a0;
- (void)logWithoutCapture:(id)a0;

@end
