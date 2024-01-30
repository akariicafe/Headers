@class STSiriMessage;

@interface AFUpdateMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMessage:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)message;
- (id)createResponseWithMessageIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
