@protocol PXActivityCoordinatorItem;

@interface PXActivityCoordinatorRecord : NSObject

@property (weak, nonatomic) id<PXActivityCoordinatorItem> item;

- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
