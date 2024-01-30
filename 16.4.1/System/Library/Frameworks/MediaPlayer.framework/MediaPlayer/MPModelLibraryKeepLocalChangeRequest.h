@class MPModelObject;

@interface MPModelLibraryKeepLocalChangeRequest : NSObject <NSCopying>

@property (retain, nonatomic) MPModelObject *modelObject;
@property (nonatomic) long long enableState;
@property (nonatomic) unsigned long long constraints;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
