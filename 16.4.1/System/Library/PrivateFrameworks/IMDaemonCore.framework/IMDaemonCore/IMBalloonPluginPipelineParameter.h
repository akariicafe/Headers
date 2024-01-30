@class NSString, NSData, NSDictionary;

@interface IMBalloonPluginPipelineParameter : IMTextMessagePipelineParameter <IMBalloonPluginPipelineParameter>

@property (copy, nonatomic) NSString *balloonPluginBundleID;
@property (copy, nonatomic) NSData *balloonPluginPayload;
@property (copy, nonatomic) NSDictionary *combinedPayloadAttachmentDictionary;
@property (nonatomic) long long associatedMessageType;
@property (copy, nonatomic) NSString *associatedMessageGUID;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } associatedMessageRange;

+ (id)logger;

- (void).cxx_destruct;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;

@end
