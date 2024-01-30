@class NSString;

@interface SCWWatchedStock : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *compactName;
@property (readonly, copy, nonatomic) NSString *symbol;
@property (readonly, copy, nonatomic) NSString *exchange;

+ (id)watchedStockWithSymbol:(id)a0 name:(id)a1 exchange:(id)a2;

- (id)initWithName:(id)a0 shortName:(id)a1 symbol:(id)a2 exchange:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 shortName:(id)a1 compactName:(id)a2 symbol:(id)a3 exchange:(id)a4;
- (id)description;
- (void).cxx_destruct;

@end
