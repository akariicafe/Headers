@class NSURL;
@protocol SKUISortDataRequestDelegate;

@interface SKUISortDataRequest : SKUIResourceRequest <NSCopying>

@property (readonly, nonatomic) NSURL *sortURL;
@property (weak, nonatomic) id<SKUISortDataRequestDelegate> delegate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)finishWithResource:(id)a0;
- (id)initWithSortURL:(id)a0;
- (id)newLoadOperation;

@end
