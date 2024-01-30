@class NSString, NSData, NSDate;

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

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
