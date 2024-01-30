@class NSNumber;

@interface _MPCPrivateListeningStateStaticSource : MPCPrivateListeningStateSource {
    NSNumber *_value;
}

+ (BOOL)supportsSecureCoding;

- (long long)sourceType;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithValue:(id)a0;
- (id)currentValue;

@end
