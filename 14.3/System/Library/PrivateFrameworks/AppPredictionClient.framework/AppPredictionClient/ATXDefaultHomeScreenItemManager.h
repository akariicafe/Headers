@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDefaultHomeScreenItemManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_path;
}

+ (id)sharedInstance;

- (id)initWithPath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchDefaultStacksOfGridSize:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)fetchSmartStackOfVariant:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)_JSONCompatible:(id)a0;
- (id)_createDefaultsDictionary:(id)a0 defaultTodayStack:(id)a1 defaultWidgetsSmall:(id)a2 defaultWidgetsMedium:(id)a3 defaultWidgetsLarge:(id)a4 shouldSuggestSmartStackInGallery:(BOOL)a5;
- (void)_readFromFileWithCompletionHandler:(id /* block */)a0;
- (void)_fetchSmartStackOfVariant:(unsigned long long)a0 localObserver:(int)a1 withCompletionHandler:(id /* block */)a2;
- (void)writeDefaultStack:(id)a0 defaultTodayPageStack:(id)a1 defaultWidgetsSmall:(id)a2 defaultWidgetsMedium:(id)a3 defaultWidgetsLarge:(id)a4 shouldSuggestSmartStackInGallery:(BOOL)a5 withCompletionHandler:(id /* block */)a6;
- (void)fetchDefaultStacksWithCompletionHandler:(id /* block */)a0;
- (void)fetchSmartStackWithCompletionHandler:(id /* block */)a0;
- (void)fetchDefaultStacksJSONWithCompletionHandler:(id /* block */)a0;

@end
