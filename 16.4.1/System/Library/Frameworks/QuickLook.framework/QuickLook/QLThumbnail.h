@class NSURL;

@interface QLThumbnail : NSObject

@property (retain) NSURL *url;

+ (id)sharedQueue;
+ (id)defaultDescriptors;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)imageForUseMode:(unsigned long long)a0 descriptor:(id)a1 generateIfNeeded:(BOOL)a2 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3 error:(id *)a4;
- (BOOL)provideImages:(id /* block */)a0 error:(id *)a1;
- (id)thumbnailCreationOperationForUseMode:(unsigned long long)a0 descriptor:(id)a1;
- (id)thumbnailCreationOperationForUseMode:(unsigned long long)a0 descriptor:(id)a1 generateIfNeeded:(BOOL)a2;

@end
