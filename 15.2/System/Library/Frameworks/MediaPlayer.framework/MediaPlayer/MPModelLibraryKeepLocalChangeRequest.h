@class MPModelObject;

@interface MPModelLibraryKeepLocalChangeRequest : NSObject <NSCopying>

@property (retain, nonatomic) MPModelObject *modelObject;
@property (nonatomic) long long enableState;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
