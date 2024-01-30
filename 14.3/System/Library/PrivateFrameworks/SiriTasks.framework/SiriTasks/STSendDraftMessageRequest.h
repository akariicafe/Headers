@class STSiriMessage;

@interface STSendDraftMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMessage:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)message;
- (id)createResponse;
- (BOOL)_makeAppFrontmost;
- (void)encodeWithCoder:(id)a0;

@end
