@class NSArray, SIRINLURequestID, SIRINLUResponseStatus;

@interface SIRINLUResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLURequestID *requestId;
@property (retain, nonatomic) NSArray *parses;
@property (retain, nonatomic) SIRINLUResponseStatus *responseStatus;
@property (retain, nonatomic) NSArray *repetitionResults;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestId:(id)a0 parses:(id)a1;
- (id)initWithRequestId:(id)a0 parses:(id)a1 repetitionResults:(id)a2;

@end
