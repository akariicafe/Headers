@class NSString, NSObject;

@interface UIDebuggingIvar : NSObject

@property (nonatomic) NSObject *object;
@property (nonatomic) struct objc_ivar { } *objcIvar;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *typeDescription;
@property (nonatomic) const char *typeEncoding;
@property (nonatomic) id value;
@property (readonly, nonatomic) NSString *valueDescription;
@property (readonly, nonatomic) BOOL isObject;

+ (id)ivarWithObjcIvar:(struct objc_ivar { } *)a0 forObject:(id)a1;

- (void)dealloc;

@end
