@class TSPObject;

@interface TSPObjectReferenceWrapper : NSObject

@property (readonly, nonatomic) TSPObject *object;

+ (BOOL)allowUnarchivingObjectClass:(Class)a0;

- (id)initWithReferencedObject:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
