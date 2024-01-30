@class CATTaskRequest;

@interface CATTaskMessageStart : CATTaskMessage

@property (retain, nonatomic) CATTaskRequest *request;

+ (BOOL)supportsSecureCoding;

- (id)initWithTaskUUID:(id)a0 request:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
