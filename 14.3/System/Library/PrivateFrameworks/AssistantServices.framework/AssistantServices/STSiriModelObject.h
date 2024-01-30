@class NSString;

@interface STSiriModelObject : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_aceContextObjectValue;
- (Class)_aceCollectionClass;
- (void)setIdentifier:(id)a0;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;

@end
