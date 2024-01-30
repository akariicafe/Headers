@interface SWLoader : NSObject

@property (readonly, nonatomic) id /* block */ loadBlock;

+ (id)loaderWithBlock:(id /* block */)a0;

- (void)load;
- (void).cxx_destruct;

@end
