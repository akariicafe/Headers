@class NSDictionary, NSNumber, ASTErrorStatus;

@interface ASTRequest : ASTSealablePayload

@property (nonatomic) long long clientStatus;
@property (retain, nonatomic) ASTErrorStatus *error;
@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSNumber *currentTest;
@property (retain, nonatomic) NSNumber *progress;

+ (id)request;
+ (id)stringFromClientStatus:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)generatePayload;

@end
