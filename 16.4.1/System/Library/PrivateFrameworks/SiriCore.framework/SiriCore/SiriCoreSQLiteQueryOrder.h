@class NSArray;

@interface SiriCoreSQLiteQueryOrder : NSObject <NSCopying>

@property (readonly, nonatomic) long long mode;
@property (readonly, copy, nonatomic) NSArray *columnNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithColumnNames:(id)a0 mode:(long long)a1;

@end
