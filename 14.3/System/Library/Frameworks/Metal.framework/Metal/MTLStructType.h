@class NSArray;

@interface MTLStructType : MTLType

@property (readonly) NSArray *members;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)memberByName:(id)a0;

@end
