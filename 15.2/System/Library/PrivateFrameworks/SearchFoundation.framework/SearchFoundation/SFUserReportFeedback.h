@class SFPunchout, SFSearchResult, SFCardSection;

@interface SFUserReportFeedback : SFFeedback <NSCopying>

@property (retain, nonatomic) SFSearchResult *result;
@property (retain, nonatomic) SFCardSection *cardSection;
@property (retain, nonatomic) SFPunchout *userSelection;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSelection:(id)a0 result:(id)a1 cardSection:(id)a2;

@end
