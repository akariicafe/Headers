@interface CKManualUpdater : NSObject

@property (nonatomic) BOOL needsUpdate;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)description;
- (void).cxx_destruct;

@end
