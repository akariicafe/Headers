@class WFType, WFCoercionOptions;

@interface WFCoercionContext : NSObject

@property (readonly, nonatomic) WFType *requestedType;
@property (readonly, nonatomic) WFCoercionOptions *options;

- (void).cxx_destruct;
- (id)initWithRequestedType:(id)a0 options:(id)a1;

@end
