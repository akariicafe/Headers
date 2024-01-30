@class NSString, NSMutableString;

@interface WFPDFTextContainer : NSObject

@property (retain, nonatomic) NSMutableString *string;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly, nonatomic) NSString *text;

- (id)init;
- (void).cxx_destruct;
- (void)addOperator:(id)a0;
- (long long)compareTransformToTextContainer:(id)a0;

@end
