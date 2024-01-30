@class NSString, NSBundle, NSMutableDictionary;

@interface MTUIRenderedHandViewFactory : NSObject {
    NSBundle *_resourcesBundle;
    NSString *_imagePath;
    struct CGPoint { double x; double y; } _offset;
    struct CGSize { double width; double height; } _scale;
    struct CGPDFPage { } *_page;
    struct CGSize { double width; double height; } _viewSize;
    NSMutableDictionary *_angleCache;
}

@property (readonly, nonatomic) NSString *key;
@property (nonatomic) unsigned long long registeredClientsCount;
@property (readonly, nonatomic) BOOL allowCaching;

+ (void)flushAllCaches;
+ (id)keyForBundle:(id)a0 imagePath:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 scale:(struct CGSize { double x0; double x1; })a3;
+ (id)registerForFactoryWithBundle:(id)a0 imagePath:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 scale:(struct CGSize { double x0; double x1; })a3 allowCaching:(BOOL)a4;
+ (void)unregisterForFactory:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)flushCache;
- (id)initWithBundle:(id)a0 imagePath:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 scale:(struct CGSize { double x0; double x1; })a3 allowCaching:(BOOL)a4;
- (id)renderImageForAngle:(double)a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageForAngle:(double)a0 viewSize:(struct CGSize { double x0; double x1; })a1;

@end
