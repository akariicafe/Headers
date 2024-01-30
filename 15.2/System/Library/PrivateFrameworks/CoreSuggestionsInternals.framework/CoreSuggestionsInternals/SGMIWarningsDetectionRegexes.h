@class NSRegularExpression;

@interface SGMIWarningsDetectionRegexes : NSObject

@property (readonly) NSRegularExpression *subject;
@property (readonly) NSRegularExpression *body;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
