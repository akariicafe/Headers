@interface CKManualUpdater : NSObject

@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) id target;
@property (nonatomic) SEL action;

- (void)updateIfNeeded;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setNeedsUpdate;
- (id)description;

@end
