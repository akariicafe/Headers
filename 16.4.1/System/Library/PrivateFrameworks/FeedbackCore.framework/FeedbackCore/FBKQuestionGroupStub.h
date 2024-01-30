@class NSString, NSArray;

@interface FBKQuestionGroupStub : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *questionAnswerPairs;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSONObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 questions:(id)a1;
- (BOOL)setPropertiesFromJSONObject:(id)a0;

@end
