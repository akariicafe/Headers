@class NSString, HDSQLiteEntityForeignKey;

@interface _HDSQLiteEntityColumn : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *columnType;
@property (readonly, nonatomic) unsigned char keyPathType;
@property (readonly, nonatomic) HDSQLiteEntityForeignKey *foreignKey;

- (void).cxx_destruct;
- (id)description;
- (id)creationSQL;
- (id)initWithName:(id)a0 columnType:(id)a1 keyPathType:(unsigned char)a2 foreignKey:(id)a3;
- (id)_columnNameAndTypeString;
- (id)initWithName:(id)a0 columnType:(id)a1 keyPathType:(unsigned char)a2;
- (id)initWithName:(id)a0 columnType:(id)a1 keyPathType:(unsigned char)a2 targetEntityClass:(Class)a3 targetProperty:(id)a4 deletionAction:(long long)a5;

@end
