@interface SWLoader : NSObject

@property (readonly, nonatomic) id /* block */ loadBlock;

+ (id)loaderWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)load;

@end
