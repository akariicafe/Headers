@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest {
    STCall *_call;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)call;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithCall:(id)a0;
- (id)createResponse;

@end
