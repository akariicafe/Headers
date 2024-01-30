@class NSString, NSAttributedString;

@interface RTIStyledIntermediateText : NSObject <NSSecureCoding> {
    unsigned long long _selectionOffset;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *inputString;
@property (readonly, nonatomic) NSAttributedString *displayString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (readonly, nonatomic) NSString *searchString;
@property (nonatomic) long long cursorVisibility;

+ (id)intermediateTextWithInputString:(id)a0 displayString:(id)a1;
+ (id)intermediateTextWithInputString:(id)a0 displayString:(id)a1 selectionLocation:(unsigned long long)a2;
+ (id)intermediateTextWithInputString:(id)a0 displayString:(id)a1 selectionLocation:(unsigned long long)a2 searchString:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithInputString:(id)a0 displayString:(id)a1 selectionLocation:(unsigned long long)a2 searchString:(id)a3;

@end
