@class NSMutableArray;

@interface BMSQLRow : NSObject <BMRow>

@property (retain, nonatomic) NSMutableArray *allValues;

+ (id)new;

- (long long)columnCount;
- (id)values;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithValues:(id)a0;
- (void).cxx_destruct;
- (id)valueAtIdx:(unsigned long long)a0;

@end
