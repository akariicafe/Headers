@class NSString, NSOperationQueue, NSLocale, NSObject, _PASLock;
@protocol OS_dispatch_semaphore;

@interface PPConnectionsPasteboardSource : PPConnectionsSource <PPConnectionsLocationSource> {
    unsigned long long _pasteboardNotificationState;
    _PASLock *_lock;
    id _pasteboardObserver;
    NSObject<OS_dispatch_semaphore> *_init_sem;
    NSOperationQueue *_pbQueue;
    NSLocale *_testLocale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_setMostRecentPasteboardItem:(id)a0;
- (id)fetchedPasteboardItem;
- (id)supportedSemanticTags;
- (id)addressPasteboardTextItemFromNotification:(BOOL)a0;
- (id)identifier;
- (void)refreshMostRecentPasteboardItemFromNotification:(BOOL)a0 explanationSet:(id)a1;
- (void)dealloc;
- (id)validUTTypes;
- (void)setPasteboardTextForTesting:(id)a0;
- (id)locationItemsWithCriteria:(id)a0 earliest:(id)a1 latest:(id)a2 limit:(unsigned long long)a3 consumer:(unsigned long long)a4 explanationSet:(id)a5;
- (void)setTestLocale:(id)a0;
- (id)init;
- (id)_mostRecentPasteboardItem;
- (void).cxx_destruct;
- (void)unsetPasteboardTextForTestingAndClearCache;

@end
