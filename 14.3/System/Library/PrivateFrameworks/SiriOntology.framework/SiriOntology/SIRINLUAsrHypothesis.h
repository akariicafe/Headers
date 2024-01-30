@class NSString, NSUUID;

@interface SIRINLUAsrHypothesis : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *utterance;
@property (nonatomic) double probability;
@property (retain, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUtterance:(id)a0 probability:(double)a1 uuid:(id)a2;

@end
