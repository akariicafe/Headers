@class NSData;

@interface TDMEvaluation : NSObject

@property (readonly, retain, nonatomic) NSData *evaluatedElement;
@property (readonly, retain, nonatomic) NSData *proof;

- (void).cxx_destruct;
- (id)initWithEvaluatedElement:(id)a0 proof:(id)a1;

@end
