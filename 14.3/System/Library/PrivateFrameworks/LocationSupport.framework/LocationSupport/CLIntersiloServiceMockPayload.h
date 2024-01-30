@class NSDictionary, XCTestExpectation;

@interface CLIntersiloServiceMockPayload : NSObject

@property (nonatomic) BOOL inUse;
@property (readonly, nonatomic) XCTestExpectation *expectation;
@property (readonly, nonatomic) NSDictionary *inputDictionary;
@property (readonly, nonatomic) NSDictionary *outputDictionary;

- (void).cxx_destruct;
- (id)initWithExpectation:(id)a0 inputDictionary:(id)a1;
- (void)setOutput:(id)a0 forKey:(id)a1;

@end
