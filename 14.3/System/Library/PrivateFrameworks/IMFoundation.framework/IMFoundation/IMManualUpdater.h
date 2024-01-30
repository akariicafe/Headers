@interface IMManualUpdater : NSObject {
    unsigned char _needsUpdate : 1;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL needsUpdate;

- (void)setNeedsUpdate:(BOOL)a0;
- (BOOL)needsUpdate;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (void)updateIfNeeded;
- (id)description;

@end
