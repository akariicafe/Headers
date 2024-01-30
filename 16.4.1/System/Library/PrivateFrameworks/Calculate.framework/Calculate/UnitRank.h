@class NSLocale;

@interface UnitRank : NSObject

@property (nonatomic) int unitID;
@property (nonatomic) float rank;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) id context;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUnitID:(int)a0 rank:(float)a1 locale:(id)a2;
- (id)initWithUnitID:(int)a0 rank:(float)a1 locale:(id)a2 context:(id)a3;

@end
