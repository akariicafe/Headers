@class ASVRealHitTestResult, ASVHitTestResult;

@interface ASVHitTestDecision : NSObject

@property (retain, nonatomic) ASVRealHitTestResult *originalResult;
@property (retain, nonatomic) ASVHitTestResult *interpolatedResult;
@property (retain, nonatomic) ASVHitTestResult *finalResult;
@property (retain, nonatomic) ASVHitTestResult *interpolatedOrFinalResult;

- (void).cxx_destruct;
- (id)initWithOriginalResult:(id)a0 interpolatedResult:(id)a1 finalResult:(id)a2;

@end
