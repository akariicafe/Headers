@class NSDictionary;

@interface _MLCANEMatMulParameters : NSObject

@property (readonly, retain, nonatomic) NSDictionary *matMulParams;
@property (readonly, retain, nonatomic) NSDictionary *gocParams;

+ (id)matMulUnitParametersWith:(id)a0 gocParams:(id)a1;

- (void).cxx_destruct;
- (id)initWithMatMulParams:(id)a0 gocParams:(id)a1;

@end
