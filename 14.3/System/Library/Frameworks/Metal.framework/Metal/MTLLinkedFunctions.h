@class NSArray, NSDictionary;

@interface MTLLinkedFunctions : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *functions;
@property (copy, nonatomic) NSArray *binaryFunctions;
@property (copy, nonatomic) NSDictionary *groups;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)linkedFunctions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
