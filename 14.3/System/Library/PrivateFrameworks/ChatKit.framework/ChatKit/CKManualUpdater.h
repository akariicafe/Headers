@interface CKManualUpdater : NSObject

@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) id target;
@property (nonatomic) SEL action;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (id)description;

@end
