@class TSPObject;

@interface TSPContainedObject : NSObject

@property (weak, nonatomic) TSPObject *owner;

- (id)initWithOwner:(id)a0;
- (void).cxx_destruct;
- (id)documentRoot;
- (void)willModify;
- (void)willModifyForUpgrade;

@end
