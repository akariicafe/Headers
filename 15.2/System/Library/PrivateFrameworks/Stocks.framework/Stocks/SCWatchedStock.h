@class NSString;

@interface SCWatchedStock : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *symbol;
@property (readonly, copy, nonatomic) NSString *exchange;
@property (readonly, copy, nonatomic) NSString *displaySymbol;

+ (id)watchedStockWithSymbol:(id)a0 name:(id)a1 exchange:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 shortName:(id)a1 symbol:(id)a2 exchange:(id)a3 displaySymbol:(id)a4;
- (id)initWithName:(id)a0 shortName:(id)a1 symbol:(id)a2 exchange:(id)a3;

@end
