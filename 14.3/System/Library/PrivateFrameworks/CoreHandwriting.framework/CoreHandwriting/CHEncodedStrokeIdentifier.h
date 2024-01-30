@class NSData;

@interface CHEncodedStrokeIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _savedHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSData *encodedStrokeIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToCHEncodedStrokeIdentifier:(id)a0;

@end
