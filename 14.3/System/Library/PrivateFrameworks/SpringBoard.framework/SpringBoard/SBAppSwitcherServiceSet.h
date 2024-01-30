@class NSMutableArray;

@interface SBAppSwitcherServiceSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *services;

- (id)appLayouts;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addService:(id)a0;
- (void)removeService:(id)a0;
- (unsigned long long)count;
- (id)serviceBundleIdentifiers;
- (id)serviceAtIndex:(unsigned long long)a0;
- (id)initWithServices:(id)a0 zone:(struct _NSZone { } *)a1;
- (id)serviceForBundleIdentifier:(id)a0;

@end
