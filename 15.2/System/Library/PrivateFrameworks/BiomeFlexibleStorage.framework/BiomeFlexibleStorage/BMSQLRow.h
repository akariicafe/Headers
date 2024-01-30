@class NSMutableArray;

@interface BMSQLRow : NSObject <BMRow>

@property (retain, nonatomic) NSMutableArray *allValues;

- (long long)columnCount;
- (id)values;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithValues:(id)a0;
- (unsigned long long)hash;
- (id)valueAtIdx:(unsigned long long)a0;

@end
