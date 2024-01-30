@class NSString, NSArray, NSData;

@interface _SFPBUserReportRequest : PBCodable <_SFPBUserReportRequest, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *affordanceText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *dismissText;
@property (copy, nonatomic) NSArray *userReportOptions;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)addUserReportOptions:(id)a0;
- (void)clearUserReportOptions;
- (unsigned long long)userReportOptionsCount;
- (id)userReportOptionsAtIndex:(unsigned long long)a0;

@end
