@class STSiriContext;

@interface AFContextResponse : AFSiriResponse {
    STSiriContext *_context;
}

+ (BOOL)supportsSecureCoding;

- (id)_context;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithRequest:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
