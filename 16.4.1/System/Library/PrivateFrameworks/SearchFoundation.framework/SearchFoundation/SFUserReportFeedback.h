@class SFPunchout, SFSearchResult, NSArray, NSString, SFCardSection;

@interface SFUserReportFeedback : SFFeedback <NSCopying>

@property (retain, nonatomic) SFSearchResult *result;
@property (retain, nonatomic) SFCardSection *cardSection;
@property (retain, nonatomic) SFPunchout *userSelection;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSString *uploadedDataIdentifier;
@property (nonatomic) int reportType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSelection:(id)a0 result:(id)a1 cardSection:(id)a2;
- (id)initWithSelection:(id)a0 result:(id)a1 cardSection:(id)a2 resultSections:(id)a3 uploadedDataIdentifier:(id)a4 userReportRequestType:(int)a5;

@end
