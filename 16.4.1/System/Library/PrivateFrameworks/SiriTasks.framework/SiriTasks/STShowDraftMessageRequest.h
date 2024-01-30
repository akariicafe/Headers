@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest {
    NSURL *_draftMessageIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)message;
- (id)description;
- (void).cxx_destruct;
- (id)createResponse;
- (id)_initWithDraftMessageIdentifier:(id)a0;
- (id)createUsageResult;
- (id)draftMessageIdentifier;

@end
