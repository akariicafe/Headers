@interface AVSpeechSynthesisMarker : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long mark;
@property (nonatomic) unsigned long long byteSampleOffset;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMarkerType:(unsigned long long)a0 forTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 atByteSampleOffset:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
