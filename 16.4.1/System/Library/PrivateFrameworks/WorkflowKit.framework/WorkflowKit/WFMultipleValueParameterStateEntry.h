@class NSUUID;
@protocol WFParameterState;

@interface WFMultipleValueParameterStateEntry : NSObject

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) id<WFParameterState> parameterState;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0 parameterState:(id)a1;

@end
