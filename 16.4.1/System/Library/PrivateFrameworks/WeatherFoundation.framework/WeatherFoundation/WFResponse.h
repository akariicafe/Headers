@class NSUUID, NSString, NSError;

@interface WFResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double executionTime;
@property (readonly) NSUUID *identifier;
@property (readonly) NSString *type;
@property (retain, nonatomic) NSError *error;

+ (id)responseWithIdentifier:(id)a0 error:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 error:(id)a1;

@end
