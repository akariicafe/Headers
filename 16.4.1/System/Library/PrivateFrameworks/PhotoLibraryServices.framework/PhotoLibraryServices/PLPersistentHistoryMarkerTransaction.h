@class NSString, NSPersistentHistoryTransaction;

@interface PLPersistentHistoryMarkerTransaction : PLPersistentHistoryMarker <PLPersistentHistoryMarkerOverrides> {
    NSPersistentHistoryTransaction *_transaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)overrride_shortDescription;
- (id)overrride_changeRequestForFetching;
- (id)initWithTransaction:(id)a0;
- (void).cxx_destruct;

@end
