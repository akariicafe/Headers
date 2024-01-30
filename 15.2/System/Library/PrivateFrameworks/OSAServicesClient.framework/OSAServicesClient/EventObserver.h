@class NSSet;
@protocol OSADiagnosticEventObserver;

@interface EventObserver : NSObject

@property (readonly, weak, nonatomic) id<OSADiagnosticEventObserver> observer;
@property (readonly, nonatomic) NSSet *bugTypes;

- (BOOL)matches:(id)a0;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 bugTypes:(id)a1;
- (void)deliverEvent:(id)a0 on:(id)a1;

@end
