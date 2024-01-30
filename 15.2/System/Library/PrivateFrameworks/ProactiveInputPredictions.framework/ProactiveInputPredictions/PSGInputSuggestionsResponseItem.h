@class PSGStructuredInfoSuggestion, PSGTextualResponseSuggestion;

@interface PSGInputSuggestionsResponseItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PSGTextualResponseSuggestion *textualResponseSuggestion;
@property (readonly, nonatomic) PSGStructuredInfoSuggestion *structuredInfoSuggestion;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)predictedValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTextualResponseSuggestion:(id)a0 structuredInfoSuggestion:(id)a1;

@end
