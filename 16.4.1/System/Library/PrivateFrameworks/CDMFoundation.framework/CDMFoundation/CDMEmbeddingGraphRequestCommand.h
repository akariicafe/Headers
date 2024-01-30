@class NSString;

@interface CDMEmbeddingGraphRequestCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;

@end
