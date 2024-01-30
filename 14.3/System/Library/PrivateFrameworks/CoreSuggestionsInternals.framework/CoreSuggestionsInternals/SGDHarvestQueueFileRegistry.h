@class NSString, NSMutableDictionary;

@interface SGDHarvestQueueFileRegistry : NSObject {
    NSString *_dir;
    NSMutableDictionary *_fdForFileId;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (id)defaultRegistry:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (int)_openForReadingIfPossibleNoCacheLocked:(int)a0;
- (void)dealloc;
- (void)flush;
- (id)initWithDirectory:(id)a0;
- (void)_flushFileId:(int)a0;
- (int)openForReadingIfPossible:(int)a0;
- (int)openForWritingIfPossible:(int)a0;
- (void)prepareToOpenForReading:(int)a0;

@end
