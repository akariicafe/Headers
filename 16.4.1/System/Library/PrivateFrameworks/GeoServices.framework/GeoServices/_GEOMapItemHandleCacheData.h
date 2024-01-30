@class NSData, NSDate;

@interface _GEOMapItemHandleCacheData : NSObject

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long cost;

- (void).cxx_destruct;
- (id)initWithTimestamp:(id)a0 data:(id)a1;

@end
