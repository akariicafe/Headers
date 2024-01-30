@class NSString;

@interface SFPasswordSecurityRecommendationsCellData : NSObject

@property (copy, nonatomic) NSString *subtitleText;
@property (nonatomic) unsigned long long numberOfWarnings;
@property (nonatomic) long long warningStyle;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSubtitleText:(id)a0 numberOfWarnings:(unsigned long long)a1 warningStyle:(long long)a2;
- (id)initWithLoadingSubtitle;

@end
