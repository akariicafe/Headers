@class STSiriContext;

@interface AFContextResponse : AFSiriResponse {
    STSiriContext *_context;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_context;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithRequest:(id)a0 context:(id)a1;

@end
