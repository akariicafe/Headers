@class BMSQLSchema;

@interface BMStreamVirtualTable : NSObject

@property (readonly, nonatomic) BMSQLSchema *schema;
@property (readonly, copy, nonatomic) id /* block */ publisherBlock;

+ (id)new;

- (id)publisher;
- (id)initWithStream:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSchema:(id)a0 publisherBlock:(id /* block */)a1;

@end
