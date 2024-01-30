@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest {
    NSURL *_draftMessageIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)message;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithDraftMessageIdentifier:(id)a0;
- (id)draftMessageIdentifier;
- (id)createUsageResult;

@end
