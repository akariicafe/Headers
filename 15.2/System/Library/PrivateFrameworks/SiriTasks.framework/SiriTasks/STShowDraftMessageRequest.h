@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest {
    NSURL *_draftMessageIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)message;
- (void)encodeWithCoder:(id)a0;
- (id)createResponse;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithDraftMessageIdentifier:(id)a0;
- (id)draftMessageIdentifier;
- (id)createUsageResult;

@end
