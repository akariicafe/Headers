@interface _UIAnimatedAttachmentView : UIView

+ (id)cacheKeyForAttachmentData:(id)a0 name:(id)a1;
+ (id)cachedObjectWithKey:(id)a0 creationBlock:(id /* block */)a1;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAttachment:(id)a0;

@end
