@class NSString;

@interface IMAssociatedMessagePipelineParameter : IMTextMessagePipelineParameter <IMAssociatedMessageProcessingParameter>

@property (nonatomic) long long associatedMessageType;
@property (copy, nonatomic) NSString *associatedMessageGUID;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } associatedMessageRange;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBDBasic:(id)a0 idsTrustedData:(id)a1;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;

@end
