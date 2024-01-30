@class NSDictionary;

@interface SSPerformEntityQueryCommand : SFPerformEntityQueryCommand

@property (nonatomic) BOOL includeSyndicatedPhotos;
@property (nonatomic) BOOL fromSuggestion;
@property (nonatomic) BOOL isNLP;
@property (copy, nonatomic) NSDictionary *spotlightRankCategories;
@property (copy, nonatomic) NSDictionary *spotlightRankTerms;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
