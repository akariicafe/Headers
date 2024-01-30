@class MPModelStaticResponse;

@interface MPModelStaticRequest : MPModelRequest

@property (retain, nonatomic) MPModelStaticResponse *staticResponse;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
