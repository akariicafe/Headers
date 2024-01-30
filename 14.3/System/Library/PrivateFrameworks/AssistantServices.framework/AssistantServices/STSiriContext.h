@class NSArray;

@interface STSiriContext : NSObject <NSSecureCoding> {
    NSArray *_modelObjects;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)modelObjects;
- (id)initWithModelObjects:(id)a0;
- (id)_aceValue;
- (void)encodeWithCoder:(id)a0;

@end
