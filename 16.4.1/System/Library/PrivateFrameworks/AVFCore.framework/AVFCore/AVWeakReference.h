@interface AVWeakReference : NSObject

@property (readonly, weak) id referencedObject;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithReferencedObject:(id)a0;

@end
