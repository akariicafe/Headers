@class REElement, NSString;

@interface REElementDataSourceUpdate : NSObject

@property (readonly, nonatomic) REElement *element;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *section;

+ (id)reloadElement:(id)a0 inSection:(id)a1;
+ (id)insertElement:(id)a0 inSection:(id)a1;
+ (id)removeElement:(id)a0 inSection:(id)a1;
+ (id)refreshElement:(id)a0 inSection:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithElement:(id)a0 section:(id)a1 updateType:(unsigned long long)a2;

@end
