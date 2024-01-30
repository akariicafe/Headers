@class NSMutableArray;

@interface SBAppSwitcherServiceSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *services;

- (void)addService:(id)a0;
- (id)appLayouts;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)removeService:(id)a0;
- (void).cxx_destruct;
- (id)serviceAtIndex:(unsigned long long)a0;
- (id)initWithServices:(id)a0 zone:(struct _NSZone { } *)a1;
- (id)serviceBundleIdentifiers;
- (id)serviceForBundleIdentifier:(id)a0;

@end
