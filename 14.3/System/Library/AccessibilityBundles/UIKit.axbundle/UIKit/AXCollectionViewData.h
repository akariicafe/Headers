@class NSMutableDictionary;

@interface AXCollectionViewData : NSObject

@property (nonatomic) long long childCount;
@property (readonly, nonatomic) NSMutableDictionary *children;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
