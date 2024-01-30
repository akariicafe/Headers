@class NSString, NSArray;

@interface SiriCoreSQLiteTableConstraint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSArray *columnNames;

+ (id)primaryKeyTableConstraintWithName:(id)a0 columnNames:(id)a1;
+ (id)uniqueTableConstraintWithName:(id)a0 columnNames:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 type:(long long)a1 columnNames:(id)a2;

@end
