@class NSNumber;

@interface CSBMLRAppIntentClassifierResult : NSObject <CSBMLRSiriXEvaluationResultProtocol>

@property (nonatomic) BOOL classified;
@property (nonatomic) BOOL classifyResult;
@property (retain, nonatomic) NSNumber *probablity;

- (void).cxx_destruct;
- (id)initWithResult:(BOOL)a0 classifyResult:(BOOL)a1 probablity:(id)a2;

@end
