@class NSURL;

@interface AFObjectCreatedSiriResponse : AFSiriResponse {
    NSURL *_objectIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_objectIdentifier;
- (id)_initWithRequest:(id)a0 objectIdentifier:(id)a1;

@end
