@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface TPFileStorageManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasClearedLegacyStorage;
@property (readonly, nonatomic) NSURL *urlForFileSystem;

+ (id)sharedInstance;

- (void)saveImage:(id)a0 withName:(id)a1;
- (void)deleteStorageAtURLs:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearLegacyStorageIfNecessary;
- (id)urlsForLegacyFileSystem;
- (void)localeChanged;
- (void)dealloc;
- (id)imageWithName:(id)a0;

@end
