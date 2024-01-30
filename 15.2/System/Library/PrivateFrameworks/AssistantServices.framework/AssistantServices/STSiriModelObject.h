@class NSString;

@interface STSiriModelObject : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (Class)_aceCollectionClass;
- (id)_aceContextObjectValue;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setIdentifier:(id)a0;

@end
