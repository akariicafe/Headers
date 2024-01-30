@protocol PSITableDelegate;

@interface PSITable : NSObject {
    BOOL _finalizzeWasCalled;
}

@property (readonly, weak) id<PSITableDelegate> delegate;

- (void)clear;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 searchable:(BOOL)a1 writable:(BOOL)a2;
- (void)finalizze;
- (void)dealloc;

@end
