@class NSData;

@interface CHEncodedStrokeIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _savedHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSData *encodedStrokeIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqualToCHEncodedStrokeIdentifier:(id)a0;

@end
