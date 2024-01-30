@class REElement, NSString;

@interface REElementDataSourceUpdate : NSObject

@property (readonly, nonatomic) REElement *element;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *section;

+ (id)insertElement:(id)a0 inSection:(id)a1;
+ (id)refreshElement:(id)a0 inSection:(id)a1;
+ (id)reloadElement:(id)a0 inSection:(id)a1;
+ (id)removeElement:(id)a0 inSection:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithElement:(id)a0 section:(id)a1 updateType:(unsigned long long)a2;

@end
