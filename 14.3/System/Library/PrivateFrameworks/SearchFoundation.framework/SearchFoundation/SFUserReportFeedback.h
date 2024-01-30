@class SFPunchout, SFSearchResult, SFCardSection;

@interface SFUserReportFeedback : SFFeedback <NSCopying>

@property (retain, nonatomic) SFSearchResult *result;
@property (retain, nonatomic) SFCardSection *cardSection;
@property (retain, nonatomic) SFPunchout *userSelection;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSelection:(id)a0 result:(id)a1 cardSection:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
