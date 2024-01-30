@class NSError;

@interface CATTaskMessageError : CATTaskMessage

@property (retain, nonatomic) NSError *taskError;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskUUID:(id)a0 taskError:(id)a1;
- (void).cxx_destruct;

@end
