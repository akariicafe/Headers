@class NSString;

@interface PPTSQLiteEntity : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *tableName;

- (id)joinClauseForProperty:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTableName:(id)a0;
- (id)disambiguatedSQLForProperty:(id)a0 shouldEscape:(BOOL)a1;

@end
