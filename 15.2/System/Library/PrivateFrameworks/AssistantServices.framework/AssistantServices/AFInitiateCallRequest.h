@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest {
    STCall *_call;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)createResponse;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithCall:(id)a0;
- (id)call;

@end
