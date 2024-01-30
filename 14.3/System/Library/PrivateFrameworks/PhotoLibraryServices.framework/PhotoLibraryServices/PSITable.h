@protocol PSITableDelegate;

@interface PSITable : NSObject {
    BOOL _finalizzeWasCalled;
}

@property (readonly, weak) id<PSITableDelegate> delegate;

- (void)clear;
- (id)initWithDelegate:(id)a0 searchable:(BOOL)a1 writable:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finalizze;

@end
