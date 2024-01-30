@class MPModelObject;

@interface MPModelLibraryDeleteEntityChangeRequest : NSObject <NSCopying>

@property (retain, nonatomic) MPModelObject *modelObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performWithResponseHandler:(id /* block */)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
