@class NSString, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface MFFileCompressionQueue : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fileCompressionQueueLock;
}

@property (class, readonly) MFFileCompressionQueue *sharedInstance;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSMutableArray *fileCompressionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addFile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)size;
- (BOOL)hasNext;
- (id)nextFile;

@end
