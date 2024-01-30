@class NSString, NSArray;

@interface SiriCoreSQLiteIndexDescription : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly, copy, nonatomic) NSArray *columnNames;
@property (readonly, nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 tableName:(id)a1 columnNames:(id)a2 options:(unsigned long long)a3;

@end
