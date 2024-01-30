@class NSDictionary, NSDate, NSObject;
@protocol OS_dispatch_source, OS_dispatch_semaphore;

@interface STStorageMediaMonitor : NSObject {
    BOOL _isMonitoring;
    id _photosLibToken;
    NSDate *_mediaLibDate;
}

@property (retain) NSDictionary *atcDict;
@property (retain) NSObject<OS_dispatch_semaphore> *loadSemaphore;
@property (retain) NSObject<OS_dispatch_source> *refreshTimer;
@property BOOL isUpdating;
@property (readonly) NSDictionary *atcDictionary;

+ (id)sharedMonitor;

- (void)sync;
- (void).cxx_destruct;
- (id)init;
- (void)startMonitor;
- (void)stopMonitor;
- (void)loadingComplete:(id)a0;
- (void)updateATCData;
- (void)mpLibraryChanged:(id)a0;

@end
