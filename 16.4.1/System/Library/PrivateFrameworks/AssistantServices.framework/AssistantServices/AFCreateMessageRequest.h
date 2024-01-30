@class STSiriMessage;

@interface AFCreateMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)message;
- (void).cxx_destruct;
- (id)_initWithMessage:(id)a0;
- (id)createResponseWithMessageIdentifier:(id)a0;

@end
