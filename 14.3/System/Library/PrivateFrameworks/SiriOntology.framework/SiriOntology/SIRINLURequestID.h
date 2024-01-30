@class NSString;

@interface SIRINLURequestID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *idAsString;
@property (retain, nonatomic) NSString *connectionID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdAsString:(id)a0 connectionID:(id)a1;

@end
