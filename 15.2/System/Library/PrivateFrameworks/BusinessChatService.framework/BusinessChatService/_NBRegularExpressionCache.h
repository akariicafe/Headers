@class NSCache;

@interface _NBRegularExpressionCache : NSObject

@property (retain, nonatomic) NSCache *cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)regularExpressionForPattern:(id)a0 error:(id *)a1;

@end
