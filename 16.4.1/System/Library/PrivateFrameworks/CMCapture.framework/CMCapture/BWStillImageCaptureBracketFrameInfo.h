@interface BWStillImageCaptureBracketFrameInfo : BWStillImageCaptureFrameInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int bracketedCaptureSequenceNumber;

+ (id)infoWithBracketedCaptureSequenceNumber:(int)a0 mainFlags:(unsigned long long)a1 sifrFlags:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBracketedCaptureSequenceNumber:(int)a0 mainFlags:(unsigned long long)a1 sifrFlags:(unsigned long long)a2;

@end
