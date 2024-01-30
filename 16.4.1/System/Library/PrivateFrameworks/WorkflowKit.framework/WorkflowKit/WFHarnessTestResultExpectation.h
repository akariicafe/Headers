@class NSString;

@interface WFHarnessTestResultExpectation : NSObject

@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly, nonatomic) long long lineNumber;
@property (readonly, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0 filePath:(id)a1 lineNumber:(long long)a2;
- (void)testWithResult:(id)a0 completion:(id /* block */)a1;

@end
