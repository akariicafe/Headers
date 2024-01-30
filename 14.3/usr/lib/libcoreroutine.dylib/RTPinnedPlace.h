@class RTMapItem;

@interface RTPinnedPlace : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) RTMapItem *mapItem;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)a0 mapItem:(id)a1;

@end
