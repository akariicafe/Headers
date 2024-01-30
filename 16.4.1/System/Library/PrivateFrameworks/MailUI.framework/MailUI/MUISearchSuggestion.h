@class MUISearchSuggestionCategory, CSSuggestion, NSPredicate;
@protocol MUISearchSuggestionDelegate;

@interface MUISearchSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CSSuggestion *spotlightSuggestion;
@property (readonly, nonatomic) MUISearchSuggestionCategory *category;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) BOOL supportsRanking;
@property (readonly, nonatomic) double ranking;
@property (readonly, nonatomic) BOOL exactMatch;
@property (weak, nonatomic) id<MUISearchSuggestionDelegate> delegate;
@property (readonly, nonatomic) BOOL isLegacy;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
