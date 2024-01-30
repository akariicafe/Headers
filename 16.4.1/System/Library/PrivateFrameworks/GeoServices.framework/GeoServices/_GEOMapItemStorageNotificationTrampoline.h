@class GEOMapItemStorage;
@protocol NSObject, GEOMapItem;

@interface _GEOMapItemStorageNotificationTrampoline : NSObject {
    id<GEOMapItem> _mapItem;
    GEOMapItemStorage *_storage;
    id<NSObject> _notificationToken;
}

- (void)dealloc;
- (id)initWithMapItem:(id)a0 mapItemStorage:(id)a1;
- (void).cxx_destruct;

@end
