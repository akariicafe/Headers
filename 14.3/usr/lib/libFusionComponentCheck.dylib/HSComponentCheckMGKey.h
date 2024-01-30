@class NSString, NSArray;

@interface HSComponentCheckMGKey : NSObject

@property (retain) NSString *key;
@property (retain) NSArray *keys;
@property (copy, nonatomic) id /* block */ transform;

+ (id)key:(id)a0;
+ (id)key:(id)a0 transform:(id /* block */)a1;
+ (id)keys:(id)a0 transform:(id /* block */)a1;

- (void).cxx_destruct;

@end
