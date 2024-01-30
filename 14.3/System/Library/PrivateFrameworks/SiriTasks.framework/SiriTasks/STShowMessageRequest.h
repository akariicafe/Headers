@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
    BOOL _showAsDraft;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)showAsDraft;
- (id)initWithCoder:(id)a0;
- (id)message;
- (id)createResponse;
- (BOOL)_makeAppFrontmost;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithMessage:(id)a0 showAsDraft:(BOOL)a1;

@end
