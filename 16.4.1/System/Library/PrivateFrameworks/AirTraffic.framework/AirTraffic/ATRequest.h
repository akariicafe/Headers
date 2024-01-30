@class NSString;

@interface ATRequest : ATMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *command;
@property (copy, nonatomic) NSString *dataClass;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)additionalDescription;
- (id)initWithCommand:(id)a0 dataClass:(id)a1 parameters:(id)a2;
- (id)responseWithError:(id)a0 parameters:(id)a1;
- (id)partialResponseWithParameters:(id)a0;

@end
