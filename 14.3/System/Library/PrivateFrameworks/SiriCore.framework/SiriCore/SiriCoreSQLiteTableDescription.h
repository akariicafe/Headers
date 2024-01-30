@class NSString, NSArray;

@interface SiriCoreSQLiteTableDescription : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *columns;
@property (readonly, copy, nonatomic) NSArray *constraints;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 columns:(id)a1 constraints:(id)a2;
- (id)initWithName:(id)a0 columnsProvider:(id /* block */)a1 constraintsProvider:(id /* block */)a2;

@end
