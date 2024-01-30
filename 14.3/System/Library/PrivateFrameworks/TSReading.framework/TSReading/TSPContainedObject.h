@class TSPObject;

@interface TSPContainedObject : NSObject

@property (weak, nonatomic) TSPObject *owner;

- (id)documentRoot;
- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)willModify;
- (void)willModifyForUpgrade;

@end
