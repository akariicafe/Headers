@class NSString, MKPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface MKPhotoLibraryMigrator : NSObject {
    unsigned long long _operationCount;
    NSObject<OS_dispatch_queue> *_queue;
    MKPhotoLibrary *_photoLibrary;
    NSString *_root;
}

@property (copy, nonatomic) NSString *path;

- (unsigned long long)operationCount;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)import:(id)a0 identifier:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 total:(unsigned long long)a4 filename:(id)a5 collection:(id)a6;
- (void)importChunk:(id)a0 identifier:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 total:(unsigned long long)a4 filename:(id)a5 collection:(id)a6;

@end
