@class NSString;

@interface MPMediaAPIParserLayer : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long type;

+ (id)layerWithKey:(id)a0 ofType:(unsigned long long)a1;
+ (id)layerWithFirstObjectOfType:(unsigned long long)a0;

- (void).cxx_destruct;

@end
