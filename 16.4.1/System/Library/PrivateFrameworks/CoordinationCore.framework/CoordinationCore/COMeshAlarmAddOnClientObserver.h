@class NSSet;

@interface COMeshAlarmAddOnClientObserver : COClientObserver

@property (readonly, copy, nonatomic) NSSet *constraints;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 constraints:(id)a1 cluster:(id)a2;

@end
