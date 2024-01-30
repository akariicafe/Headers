@class NSArray, NSDictionary;

@interface MTLLinkedFunctions : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *functions;
@property (copy, nonatomic) NSArray *binaryFunctions;
@property (copy, nonatomic) NSDictionary *groups;
@property (copy, nonatomic) NSArray *privateFunctions;

+ (id)linkedFunctions;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
