@class NSString;

@interface SFSecurityRecommendationsCellData : NSObject

@property (copy, nonatomic) NSString *subtitleText;
@property (nonatomic) unsigned long long numberOfWarnings;
@property (nonatomic) long long warningStyle;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithLoadingSubtitle;
- (id)initWithSubtitleText:(id)a0 numberOfWarnings:(unsigned long long)a1 warningStyle:(long long)a2;

@end
