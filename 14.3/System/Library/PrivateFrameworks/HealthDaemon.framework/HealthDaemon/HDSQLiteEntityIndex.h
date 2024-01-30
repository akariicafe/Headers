@class NSString, NSArray;

@interface HDSQLiteEntityIndex : NSObject

@property (readonly, nonatomic) Class entityClass;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *disambiguatedName;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic, getter=isUnique) BOOL unique;
@property (readonly, copy, nonatomic) NSString *predicateString;

- (void).cxx_destruct;
- (id)initWithEntity:(Class)a0 name:(id)a1 columns:(id)a2;
- (id)initWithEntity:(Class)a0 name:(id)a1 columns:(id)a2 unique:(BOOL)a3 predicateString:(id)a4;
- (id)creationSQL;

@end
