@class NSString, NSArray, NSData, _SFPBPunchout;

@interface _SFPBUserReportRequest : PBCodable <_SFPBUserReportRequest, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *affordanceText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *dismissText;
@property (copy, nonatomic) NSArray *userReportOptions;
@property (nonatomic) int reportType;
@property (copy, nonatomic) NSString *reportOptionsSectionTitle;
@property (copy, nonatomic) NSString *disclaimerText;
@property (retain, nonatomic) _SFPBPunchout *disclaimerLearnMorePunchout;
@property (copy, nonatomic) NSString *attachmentSectionTitle;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addUserReportOptions:(id)a0;
- (void)clearUserReportOptions;
- (id)userReportOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)userReportOptionsCount;

@end
