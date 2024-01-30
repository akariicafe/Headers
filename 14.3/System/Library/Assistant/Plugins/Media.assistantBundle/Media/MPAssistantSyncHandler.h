@class NSString, MPMediaLibrary, _MPMediaLibraryEntityChange, NSObject;
@protocol OS_dispatch_semaphore;

@interface MPAssistantSyncHandler : NSObject <AFSyncHandler> {
    MPMediaLibrary *_library;
    NSObject<OS_dispatch_semaphore> *_changeEnumerationSemaphore;
    NSObject<OS_dispatch_semaphore> *_resultProcessingSemaphore;
    _MPMediaLibraryEntityChange *_nextChange;
    BOOL _deleteNextChange;
    BOOL _resetSync;
    BOOL _abortSync;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_widthLimitedOperationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 forKey:(id)a2 beginInfo:(id)a3;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;

@end
