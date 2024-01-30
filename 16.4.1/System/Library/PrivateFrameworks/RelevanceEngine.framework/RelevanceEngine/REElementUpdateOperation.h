@class REElement, RESectionPath;

@interface REElementUpdateOperation : NSObject

@property (readonly, nonatomic) REElement *element;
@property (readonly, nonatomic) RESectionPath *path;
@property (readonly, nonatomic) RESectionPath *movedToPath;
@property (readonly, nonatomic) unsigned long long type;

+ (id)insertElement:(id)a0 atPath:(id)a1;
+ (id)moveElement:(id)a0 fromPath:(id)a1 toPath:(id)a2;
+ (id)reloadElement:(id)a0 atPath:(id)a1;
+ (id)removeElement:(id)a0 atPath:(id)a1;
+ (id)refreshElement:(id)a0 atPath:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithElement:(id)a0 path:(id)a1 newPath:(id)a2 updateType:(unsigned long long)a3;

@end
