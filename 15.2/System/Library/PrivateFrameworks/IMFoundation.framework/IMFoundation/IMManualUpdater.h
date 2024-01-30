@interface IMManualUpdater : NSObject {
    unsigned char _needsUpdate : 1;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) BOOL needsUpdate;

- (BOOL)needsUpdate;
- (void)updateIfNeeded;
- (void)setNeedsUpdate:(BOOL)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setNeedsUpdate;
- (id)description;
- (void).cxx_destruct;

@end
