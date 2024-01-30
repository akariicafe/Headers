@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface TPFileStorageManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasClearedLegacyStorage;
@property (readonly, nonatomic) NSURL *urlForFileSystem;

+ (id)sharedInstance;

- (void)localeChanged;
- (id)init;
- (id)imageWithName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearLegacyStorageIfNecessary;
- (id)urlsForLegacyFileSystem;
- (void)deleteStorageAtURLs:(id)a0;
- (void)saveImage:(id)a0 withName:(id)a1;

@end
