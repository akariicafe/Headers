@class NSString, NSDictionary, NSDate, NSNumber;

@interface UIItemProvider : NSItemProvider

@property (copy, nonatomic) NSDictionary *teamMetadata;
@property (nonatomic) struct CGSize { double x0; double x1; } estimatedDisplayedSize;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSNumber *size;

- (void)registerFileRepresentationForTypeIdentifier:(id)a0 fileOptions:(long long)a1 options:(id)a2 loadHandler:(id /* block */)a3;
- (void)copyFileRepresentationForTypeIdentifier:(id)a0 toURL:(id)a1 options:(id)a2 completionBlock:(id /* block */)a3;
- (void)getInPlaceFileRepresentationForTypeIdentifier:(id)a0 options:(id)a1 completionBlock:(id /* block */)a2;
- (void)registerFileRepresentationForTypeIdentifier:(id)a0 fileOptions:(long long)a1 loadHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)loadObjectOfClass:(Class)a0 completionHandler:(id /* block */)a1;
- (id)initWithPBItem:(id)a0 secureRetryHandler:(id /* block */)a1;
- (id)copyDataRepresentationForTypeIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (void)copyDataRepresentationForTypeIdentifier:(id)a0 options:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)copyFileRepresentationForTypeIdentifier:(id)a0 toURL:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)canCreateObjectOfClass:(Class)a0;
- (id)instantiateObjectOfClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)instantiateObjectOfClass:(Class)a0 options:(id)a1 completionBlock:(id /* block */)a2;
- (void)registerDataRepresentationForTypeIdentifier:(id)a0 options:(id)a1 loadHandler:(id /* block */)a2;
- (void)registerDataRepresentationForTypeIdentifier:(id)a0 loadHandler:(id /* block */)a1;
- (id)copyDataRepresentationForTypeIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (id)copyDataRepresentationForTypeIdentifier:(id)a0 error:(id *)a1;
- (id)copyFileRepresentationForTypeIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (id)copyFileRepresentationForTypeIdentifier:(id)a0 error:(id *)a1;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)a0 inPlace:(BOOL *)a1 error:(id *)a2;
- (id)getInPlaceFileRepresentationForTypeIdentifier:(id)a0 options:(id)a1 error:(id *)a2;
- (void)registerObject:(id)a0 options:(id)a1;
- (void)registerObjectOfClass:(Class)a0 options:(id)a1 loadHandler:(id /* block */)a2;
- (BOOL)canInstantiateObjectOfClass:(Class)a0;
- (id)createObjectOfClass:(Class)a0 completionBlock:(id /* block */)a1;
- (id)createObjectOfClass:(Class)a0 error:(id *)a1;
- (id)initWithPBItem:(id)a0;

@end
