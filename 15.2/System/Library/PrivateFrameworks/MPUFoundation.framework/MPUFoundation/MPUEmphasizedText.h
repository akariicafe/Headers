@class NSString, NSArray, NSMutableSet;

@interface MPUEmphasizedText : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet *_emphasisRangesSet;
    NSString *_string;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, copy, nonatomic) NSArray *emphasisRanges;

+ (void)_enumerateEmphasisRangesInString:(id)a0 withEmphasisDelimiter:(id)a1 usingBlock:(id /* block */)a2;
+ (void)_enumerateEmphasisRangesInString:(id)a0 withEmphasisSubstring:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
+ (id)attributedStringWithString:(id)a0 emphasisDelimiter:(id)a1 regularTextAttributes:(id)a2 emphasizedTextAttributes:(id)a3;
+ (id)attributedStringWithString:(id)a0 emphasisSubstring:(id)a1 options:(unsigned long long)a2 regularTextAttributes:(id)a3 emphasizedTextAttributes:(id)a4;
+ (id)emphasizedTextWithString:(id)a0;
+ (id)emphasizedTextUsingString:(id)a0 emphasisDelimiter:(id)a1;
+ (id)emphasizedTextUsingString:(id)a0 emphasisSubstring:(id)a1 options:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithString:(id)a0 emphasisRanges:(id)a1;
- (void)enumerateEmphasisRangesUsingBlock:(id /* block */)a0;
- (id)newAttributedStringWithRegularTextAttributes:(id)a0 emphasizedTextAttributes:(id)a1;
- (id)newAttributedStringWithTextAttributes:(id)a0;

@end
