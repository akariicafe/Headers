@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest {
    STCall *_call;
}

+ (BOOL)supportsSecureCoding;

- (id)call;
- (void).cxx_destruct;
- (id)_initWithCall:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;

@end
