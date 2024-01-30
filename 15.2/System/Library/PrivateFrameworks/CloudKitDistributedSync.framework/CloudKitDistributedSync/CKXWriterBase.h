@class NSMutableArray, CKXSchema;

@interface CKXWriterBase : NSObject

@property (readonly, nonatomic) NSMutableArray *datas;
@property (readonly, nonatomic) CKXSchema *schema;

- (long long)pageCount;
- (void).cxx_destruct;
- (id)pageAtIndex:(long long)a0;
- (id)initWithSchema:(id)a0;
- (long long)newPage;

@end
