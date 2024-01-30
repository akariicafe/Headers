@class PPNamedEntityFilter;

@interface PPLocalNamedEntityStoreGuardedData : NSObject {
    BOOL _pendingNamedEntityChangeNotification;
    PPNamedEntityFilter *_filter;
}

- (id)init;
- (void).cxx_destruct;

@end
