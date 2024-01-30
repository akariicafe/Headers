@class NSSet;
@protocol OSADiagnosticEventObserver;

@interface EventObserver : NSObject

@property (readonly, weak, nonatomic) id<OSADiagnosticEventObserver> observer;
@property (readonly, nonatomic) NSSet *bugTypes;

- (void).cxx_destruct;
- (BOOL)matches:(id)a0;
- (void)deliverEvent:(id)a0 on:(id)a1;
- (id)initWithObserver:(id)a0 bugTypes:(id)a1;

@end
