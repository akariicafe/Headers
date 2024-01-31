@class NSString;

@interface AVSpeechSynthesisMarker : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mark;
@property (nonatomic) unsigned long long byteSampleOffset;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (copy, nonatomic) NSString *bookmarkName;
@property (copy, nonatomic) NSString *phoneme;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBookmarkName:(id)a0 atByteSampleOffset:(long long)a1;
- (id)initWithMarkerType:(long long)a0 forTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 atByteSampleOffset:(unsigned long long)a2;
- (id)initWithMarkerType:(long long)a0 name:(id)a1 forTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 atByteSampleOffset:(unsigned long long)a3;
- (id)initWithParagraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atByteSampleOffset:(long long)a1;
- (id)initWithPhonemeString:(id)a0 atByteSampleOffset:(long long)a1;
- (id)initWithSentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atByteSampleOffset:(long long)a1;
- (id)initWithWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atByteSampleOffset:(long long)a1;

@end
