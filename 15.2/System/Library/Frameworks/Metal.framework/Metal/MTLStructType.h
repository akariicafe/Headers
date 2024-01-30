@class NSArray;

@interface MTLStructType : MTLType

@property (readonly) NSArray *members;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)memberByName:(id)a0;

@end
