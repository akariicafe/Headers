@class NSString, NSArray;

@interface TIKeyboardIntermediateText : NSObject <NSSecureCoding> {
    unsigned long long _selectionOffset;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *inputString;
@property (readonly, nonatomic) NSString *lastInputString;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (readonly, nonatomic) long long candidateOffset;
@property (readonly, nonatomic) NSArray *liveConversionSegments;
@property (readonly, nonatomic) long long highlightSegmentIndex;
@property (readonly, nonatomic) NSString *searchString;

+ (id)intermediateTextWithInputString:(id)a0 displayString:(id)a1;
+ (id)intermediateTextWithInputString:(id)a0 displayString:(id)a1 lastInputString:(id)a2;
+ (id)intermediateTextWithInputString:(id)a0 displayString:(id)a1 selectionLocation:(unsigned long long)a2 lastInputString:(id)a3;
+ (id)intermediateTextWithInputString:(id)a0 displayString:(id)a1 selectionLocation:(unsigned long long)a2 searchString:(id)a3 candidateOffset:(long long)a4 liveConversionSegments:(id)a5 highlightSegmentIndex:(long long)a6 lastInputString:(id)a7;
+ (id)intermediateTextWithInputString:(id)a0 displayString:(id)a1 selectionLocation:(unsigned long long)a2 searchString:(id)a3 lastInputString:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInputString:(id)a0 displayString:(id)a1 selectionLocation:(unsigned long long)a2 searchString:(id)a3 candidateOffset:(unsigned long long)a4 liveConversionSegments:(id)a5 highlightSegmentIndex:(long long)a6 lastInputString:(id)a7;

@end
