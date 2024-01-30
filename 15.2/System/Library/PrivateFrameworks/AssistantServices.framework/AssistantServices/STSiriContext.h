@class NSArray;

@interface STSiriContext : NSObject <NSSecureCoding> {
    NSArray *_modelObjects;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithModelObjects:(id)a0;
- (void).cxx_destruct;
- (id)modelObjects;
- (id)initWithCoder:(id)a0;
- (id)_aceValue;

@end
