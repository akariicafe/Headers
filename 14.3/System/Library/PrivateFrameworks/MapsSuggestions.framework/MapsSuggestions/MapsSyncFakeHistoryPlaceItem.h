@class GEOMapItemStorage, NSUUID, NSString, NSDate;

@interface MapsSyncFakeHistoryPlaceItem : MapsSyncFakeHistoryItem <MapsSyncHistoryPlaceItem>

@property (readonly, nonatomic) GEOMapItemStorage *mapItemStorage;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 createTime:(id)a1 mapItem:(id)a2;

@end
