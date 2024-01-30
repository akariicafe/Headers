@class NSDictionary, NSString, NSNumber;

@interface ASTResponse : NSObject

@property (retain, nonatomic) NSDictionary *stringToCommand;
@property (retain, nonatomic) NSString *commandString;
@property (readonly, nonatomic) long long command;
@property (readonly, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) NSNumber *progress;
@property (readonly, nonatomic) NSNumber *testId;

+ (id)_stringToCommand;
+ (id)responseWithDictionary:(id)a0;
+ (id)stringFromCommand:(long long)a0;

- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)validateData:(id)a0 command:(long long)a1;
- (BOOL)validateResponse:(id)a0 key:(id)a1 expectedClass:(Class)a2;
- (BOOL)validateTestId:(id)a0 command:(long long)a1;

@end
