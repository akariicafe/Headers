@class NSString, NSData, NSDate, _TtC8MapsSync19MapsSyncCommunityID;

@interface MapsSync.MapsSyncMutableRAPRecord : MapsSync.MapsSyncMutableBaseItem {
    void /* unknown type, empty encoding */ _proxy;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSData *contentData;
@property (nonatomic) short clientRevision;
@property (nonatomic, copy) NSData *rapResponse;
@property (nonatomic, retain) _TtC8MapsSync19MapsSyncCommunityID *communityID;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
