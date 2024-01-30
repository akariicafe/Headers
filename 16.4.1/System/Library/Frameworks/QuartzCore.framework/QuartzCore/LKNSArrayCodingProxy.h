@class NSArray;

@interface LKNSArrayCodingProxy : CACodingProxy {
    NSArray *_array;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)decodedObject;

@end
