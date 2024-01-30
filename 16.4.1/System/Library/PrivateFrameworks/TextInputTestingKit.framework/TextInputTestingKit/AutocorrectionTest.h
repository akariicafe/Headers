@class NSString, NSArray, NSDictionary, NSNumber;

@interface AutocorrectionTest : NSObject <NSCoding>

@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) NSArray *expectedOutput;
@property (readonly, nonatomic) NSDictionary *sourceMetadata;
@property (readonly, nonatomic) NSArray *touches;
@property (readonly, nonatomic) NSNumber *corpusId;

+ (id)testWithTouches:(id)a0 expectedOutput:(id)a1;
+ (id)testWithInput:(id)a0;
+ (id)testWithInput:(id)a0 andCorpusId:(id)a1;
+ (id)testWithInput:(id)a0 expectedOutput:(id)a1;
+ (id)testWithInput:(id)a0 expectedOutput:(id)a1 sourceMetadata:(id)a2 withTouches:(id)a3 andCorpusId:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
