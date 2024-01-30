@class NSString;

@interface SIRINLUResponseStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int statusCode;
@property (retain, nonatomic) NSString *statusDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initStatusCode:(int)a0 statusDescription:(id)a1;

@end
