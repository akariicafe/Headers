@class NUScript;

@interface NURenderPipelineFilter : NSObject

@property (readonly, nonatomic) NUScript *script;
@property (readonly, nonatomic) id /* block */ filterBlock;

+ (id)stopAtTagFilter:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithScript:(id)a0;
- (id)initWithScript:(id)a0 block:(id /* block */)a1;

@end
