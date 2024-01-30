@class NSSet;
@protocol OSADiagnosticWriteObserver;

@interface WriteObserver : NSObject

@property (readonly, weak, nonatomic) id<OSADiagnosticWriteObserver> observer;
@property (readonly, nonatomic) NSSet *bugTypes;

- (BOOL)matches:(id)a0;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 bugTypes:(id)a1;
- (void)deliverWillWrite:(id)a0 on:(id)a1;
- (void)deliverDidWrite:(id)a0 on:(id)a1;

@end
