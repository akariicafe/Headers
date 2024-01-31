@class NSMutableDictionary;

@interface AXCollectionViewData : NSObject {
    NSMutableDictionary *_children;
    long long _childCount;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
