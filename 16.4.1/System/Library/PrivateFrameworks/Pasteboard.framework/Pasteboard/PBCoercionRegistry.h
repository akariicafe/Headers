@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PBCoercionRegistry : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableDictionary *member_exporterByClass;
@property (retain, nonatomic) NSMutableDictionary *member_importerByClass;
@property (retain, nonatomic) NSMutableDictionary *member_classCoercionByClass;

+ (id)defaultRegistry;
+ (id)archivedDataFromObject:(id)a0 requestedType:(id)a1 outError:(id *)a2;
+ (id)objectFromArchivedData:(id)a0 URL:(id)a1 requestedClass:(Class)a2 typeIdentifier:(id)a3 outError:(id *)a4;

- (id)init;
- (void).cxx_destruct;
- (void)registerCoercionFromObjectOfClass:(Class)a0 toObjectOfClass:(Class)a1 coercionBlock:(id /* block */)a2;
- (void)registerCoercionFromObjectOfClass:(Class)a0 toRepresentationOfType:(id)a1 coercionBlock:(id /* block */)a2;
- (void)registerCoercionFromRepresentationConformingToType:(id)a0 toObjectOfClass:(Class)a1 coercionBlock:(id /* block */)a2;
- (id)_availableClassesToCoerceFromClass:(Class)a0;
- (id)_member_acceptableRepresentationTypesForCreatingObjectOfClass:(Class)a0;
- (id)_member_availableClassesToCoerceToFromClass:(Class)a0;
- (id)_member_availableDirectRepresentationTypesForClass:(Class)a0;
- (id)_member_exporterFromClass:(Class)a0 toType:(id)a1;
- (void)_member_registerCoercionFromObjectOfClass:(Class)a0 toObjectOfClass:(Class)a1 coercionBlock:(id /* block */)a2;
- (void)_member_registerCoercionFromObjectOfClass:(Class)a0 toRepresentationOfType:(id)a1 coercionBlock:(id /* block */)a2;
- (void)_member_registerCoercionFromRepresentationConformingToType:(id)a0 toObjectOfClass:(Class)a1 coercionBlock:(id /* block */)a2;
- (id)_newObjectOfClass:(Class)a0 fromData:(id)a1 URL:(id)a2 ofType:(id)a3 outError:(id *)a4;
- (id)acceptableRepresentationTypesForCreatingObjectOfClass:(Class)a0;
- (id)availableRepresentationTypesForClass:(Class)a0;
- (BOOL)canCoerceFromRepresentationConformingToType:(id)a0 toObjectOfClass:(Class)a1;
- (BOOL)canCoerceObjectOfClass:(Class)a0 toObjectOfClass:(Class)a1;
- (BOOL)canCoerceObjectOfClass:(Class)a0 toRepresentationConformingToType:(id)a1;
- (void)loadRepresentationOfObject:(id)a0 asType:(id)a1 completionBlock:(id /* block */)a2;
- (id)newObjectOfClass:(Class)a0 fromContentsOfURL:(id)a1 ofType:(id)a2 outError:(id *)a3;
- (id)newObjectOfClass:(Class)a0 fromData:(id)a1 ofType:(id)a2 outError:(id *)a3;

@end
