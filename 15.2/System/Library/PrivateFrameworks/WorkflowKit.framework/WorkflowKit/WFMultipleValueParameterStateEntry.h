@class NSUUID;
@protocol WFParameterState;

@interface WFMultipleValueParameterStateEntry : NSObject

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) id<WFParameterState> parameterState;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIdentity:(id)a0 parameterState:(id)a1;

@end
