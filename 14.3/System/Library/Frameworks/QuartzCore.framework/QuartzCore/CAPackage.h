@class CALayer;

@interface CAPackage : NSObject {
    struct _CAPackageData { id x0; id x1; id x2; BOOL x3; BOOL x4; id x5; id x6; } *_data;
}

@property (readonly) CALayer *rootLayer;
@property (readonly, getter=isGeometryFlipped) BOOL geometryFlipped;

+ (id)packageWithContentsOfURL:(id)a0 type:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)packageWithData:(id)a0 type:(id)a1 options:(id)a2 error:(id *)a3;

- (id)unarchiver:(id)a0 didDecodeObject:(id)a1;
- (void)CAMLParser:(id)a0 didLoadResource:(id)a1 fromURL:(id)a2;
- (id)substitutedClasses;
- (id)_initWithContentsOfURL:(id)a0 type:(id)a1 options:(id)a2 error:(id *)a3;
- (void)dealloc;
- (id)CAMLParser:(id)a0 resourceForURL:(id)a1;
- (Class)unarchiver:(id)a0 cannotDecodeObjectOfClassName:(id)a1 originalClasses:(id)a2;
- (void)foreachLayer:(id /* block */)a0;
- (id)_initWithData:(id)a0 type:(id)a1 options:(id)a2 error:(id *)a3;
- (void)_readFromCAMLData:(id)a0 type:(id)a1 options:(id)a2 error:(id *)a3;
- (id)publishedObjectWithName:(id)a0;
- (void)_addClassSubstitutions:(id)a0;
- (Class)CAMLParser:(id)a0 didFailToFindClassWithName:(id)a1;
- (void)_readFromArchiveData:(id)a0 options:(id)a1 error:(id *)a2;
- (id)publishedObjectNames;
- (void)_readFromCAMLURL:(id)a0 type:(id)a1 options:(id)a2 error:(id *)a3;

@end
