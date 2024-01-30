@class NSDictionary, NSString, NSNumber;

@interface ASTResponse : NSObject

@property (retain, nonatomic) NSDictionary *stringToCommand;
@property (retain, nonatomic) NSString *commandString;
@property (readonly, nonatomic) long long command;
@property (readonly, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) NSNumber *progress;
@property (readonly, nonatomic) NSNumber *testId;

+ (id)stringFromCommand:(long long)a0;
+ (id)responseWithDictionary:(id)a0;
+ (id)_stringToCommand;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (BOOL)validateResponse:(id)a0 key:(id)a1 expectedClass:(Class)a2;
- (id)validateData:(id)a0 command:(long long)a1;
- (BOOL)validateTestId:(id)a0 command:(long long)a1;

@end
