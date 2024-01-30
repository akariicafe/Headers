@class NSThread;
@protocol NSObject;

@interface CKTransactionalComponentDataSourceConfiguration : NSObject {
    struct CKSizeRange { struct CGSize { double width; double height; } min; struct CGSize { double width; double height; } max; } _sizeRange;
}

@property (readonly, nonatomic) NSThread *workThreadOverride;
@property (readonly, nonatomic) Class componentProvider;
@property (readonly, nonatomic) id<NSObject> context;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithComponentProvider:(Class)a0 context:(id)a1 sizeRange:(const struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)initWithComponentProvider:(Class)a0 context:(id)a1 sizeRange:(const struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 workThreadOverride:(id)a3;
- (const struct CKSizeRange { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)sizeRange;

@end
