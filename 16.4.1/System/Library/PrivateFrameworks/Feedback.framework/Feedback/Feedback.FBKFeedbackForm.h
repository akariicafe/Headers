@interface Feedback.FBKFeedbackForm : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ answers;
    void /* unknown type, empty encoding */ authenticationMethod;
    void /* unknown type, empty encoding */ attachments;
    void /* unknown type, empty encoding */ localizedAttachmentLegalText;
    void /* unknown type, empty encoding */ sandboxExtensionAttachments;
    void /* unknown type, empty encoding */ formId;
    void /* unknown type, empty encoding */ plugFormIds;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ appToken;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
