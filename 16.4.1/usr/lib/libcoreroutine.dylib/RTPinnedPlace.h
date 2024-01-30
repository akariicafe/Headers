@class RTMapItem;

@interface RTPinnedPlace : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) RTMapItem *mapItem;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 mapItem:(id)a1;

@end
