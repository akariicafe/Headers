@class NSDictionary;

@interface EKSequenceToken : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_sequenceNumbers;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CADToken;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)legacyToken;
- (id)initWithCADSequenceToken:(id)a0;
- (void).cxx_destruct;

@end
