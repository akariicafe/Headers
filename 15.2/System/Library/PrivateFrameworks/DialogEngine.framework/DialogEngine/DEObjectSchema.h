@class NSString;

@interface DEObjectSchema : NSObject

@property const void *This;
@property (readonly) NSString *name;
@property (readonly) NSString *baseObject;
@property (readonly) NSString *description;

+ (id)schema:(id)a0 typeName:(id)a1;

- (id)init;
- (id)initWithPtr:(const void *)a0;
- (id)propertyNames:(id)a0;
- (id)property:(id)a0 name:(id)a1;
- (id)inputNames:(id)a0;
- (id)input:(id)a0 name:(id)a1;

@end
