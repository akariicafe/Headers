@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPClientDatabaseManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_databases;
}

+ (id)sharedDatabaseForPhotoLibrary:(id)a0;
+ (id)sharedDatabaseManager;

- (id)init;
- (void).cxx_destruct;
- (id)sharedDatabaseForPhotoLibrary:(id)a0;

@end
