@class NSURL;

@interface AFObjectUpdatedSiriResponse : AFSiriResponse {
    NSURL *_objectIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)_initWithRequest:(id)a0 objectIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)_objectIdentifier;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
