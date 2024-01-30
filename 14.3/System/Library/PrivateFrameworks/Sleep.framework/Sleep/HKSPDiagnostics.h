@class NSString, HKSPObserverSet;

@interface HKSPDiagnostics : NSObject

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) HKSPObserverSet *providers;

- (void)addProvider:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0;
- (void)_registerStateHandler;
- (void)removeProvider:(id)a0;

@end
