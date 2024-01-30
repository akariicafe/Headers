@class NSString, NSDictionary;

@interface WBSPasswordPatternMatch : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *matchedSubstring;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) unsigned long long endIndex;
@property (readonly, nonatomic) double guessesRequired;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)compactDescriptionWithMatchedStringColumnWidth:(unsigned long long)a0;
- (id)initExhaustiveSearchPatternWithMatchedSubstring:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithType:(unsigned long long)a0 matchedSubstring:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 guessesRequired:(double)a3 userInfo:(id)a4;

@end
