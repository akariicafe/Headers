@class NSArray, SIRINLURequestID;

@interface SIRINLUResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLURequestID *requestId;
@property (retain, nonatomic) NSArray *parses;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestId:(id)a0 parses:(id)a1;

@end
