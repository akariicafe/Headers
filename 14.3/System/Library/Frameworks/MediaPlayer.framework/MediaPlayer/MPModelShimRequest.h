@class MPModelRequest;

@interface MPModelShimRequest : MPRequest

@property (retain, nonatomic) MPModelRequest *modelRequest;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)middlewareClasses;
- (id)description;

@end
