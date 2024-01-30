@class NSString;

@interface MTLVertexAttribute : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long attributeIndex;
@property (readonly) unsigned long long attributeType;
@property (readonly, getter=isActive) BOOL active;
@property (readonly, getter=isPatchData) BOOL patchData;
@property (readonly, getter=isPatchControlPointData) BOOL patchControlPointData;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;


@end
