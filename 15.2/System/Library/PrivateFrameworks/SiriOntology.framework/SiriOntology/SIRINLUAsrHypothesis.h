@class NSString, NSArray, NSUUID;

@interface SIRINLUAsrHypothesis : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *utterance;
@property (nonatomic) double probability;
@property (retain, nonatomic) NSArray *asrTokens;
@property (retain, nonatomic) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUtterance:(id)a0 probability:(double)a1 uuid:(id)a2;
- (id)initWithUtterance:(id)a0 probability:(double)a1 asrTokens:(id)a2 uuid:(id)a3;

@end
