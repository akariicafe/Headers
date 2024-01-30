@class NSString, NSUUID;

@interface SIRINLURequestID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *idAsString;
@property (retain, nonatomic) NSUUID *nluRequestId;
@property (retain, nonatomic) NSString *connectionID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdAsString:(id)a0 nluRequestId:(id)a1 connectionID:(id)a2;
- (id)initWithIdAsString:(id)a0 connectionID:(id)a1;

@end
