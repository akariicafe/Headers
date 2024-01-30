@class NSArray, PSGInputSuggestionsExplanationSet;

@interface PSGInputSuggestionsResponse : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double triggeringTimeMillis;
@property (nonatomic) int triggeredItemsCount;
@property (nonatomic) double servingTimeMillis;
@property (readonly, nonatomic) NSArray *responseItems;
@property (readonly, nonatomic) PSGInputSuggestionsExplanationSet *explanationSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToResponse:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithResponseItems:(id)a0 explanationSet:(id)a1;

@end
