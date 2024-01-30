@class NSMutableArray;

@interface SKUIHorizontalLockupColumn : NSObject

@property (nonatomic) long long identifier;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, copy, nonatomic) NSMutableArray *childViewElements;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)_addChildViewElement:(id)a0;

@end
