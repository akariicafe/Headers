@class NSArray, SIRINLURequestID, SIRINLUTurnInput;

@interface SIRINLURequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLURequestID *requestId;
@property (retain, nonatomic) SIRINLUTurnInput *currentTurnInput;
@property (retain, nonatomic) NSArray *previousTurnInputs;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestId:(id)a0 currentTurnInput:(id)a1 previousTurnInputs:(id)a2;

@end
