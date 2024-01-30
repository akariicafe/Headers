@interface CNUIImageProvider : NSObject

+ (id)imageForResource:(id)a0 template:(BOOL)a1;
+ (id)cacheKeyForImageResourceName:(id)a0 template:(BOOL)a1;
+ (id)imageForResource:(id)a0 template:(BOOL)a1 onCacheMiss:(id /* block */)a2;
+ (id)imageForResource:(id)a0;
+ (id)uncachedImageForResource:(id)a0 template:(BOOL)a1;

@end
