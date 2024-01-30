@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MKFileMigrator : NSObject {
    unsigned long long _operationCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_root;
}

- (unsigned long long)operationCount;
- (void).cxx_destruct;
- (id)init;
- (void)import:(id)a0 filename:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 total:(unsigned long long)a4;
- (void)importChunk:(id)a0 filename:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 total:(unsigned long long)a4;

@end
