@class NLModel, NSString;

@interface CVNLPCommSafetyTextAnalyzerModel : NSObject {
    NLModel *_model;
    NSString *_className;
    double _threshold;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)detectSensitivityForString:(id)a0;
- (id)initWithModel:(id)a0 className:(id)a1 threshold:(double)a2;

@end
