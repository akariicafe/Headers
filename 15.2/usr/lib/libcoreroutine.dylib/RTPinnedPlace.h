@class RTMapItem;

@interface RTPinnedPlace : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) RTMapItem *mapItem;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(unsigned long long)a0 mapItem:(id)a1;

@end
