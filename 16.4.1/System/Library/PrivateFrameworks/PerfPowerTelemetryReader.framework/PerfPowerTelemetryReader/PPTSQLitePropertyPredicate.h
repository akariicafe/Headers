@class NSString;

@interface PPTSQLitePropertyPredicate : PPTSQLitePredicate <NSCopying>

@property (readonly, copy, nonatomic) NSString *property;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
