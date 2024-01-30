@class NSString, NSUUID, NSData, NSDate, NSDictionary;

@interface DRConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL payloadIsJSON;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *configDescription;
@property (readonly, nonatomic) NSUUID *configUUID;
@property (readonly, nonatomic) NSDate *receivedDate;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) NSDictionary *payloadDictionaryRepresentation;
@property (readonly, nonatomic) BOOL skippedHysteresis;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToConfig:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBuild:(id)a0 teamID:(id)a1 configDescription:(id)a2 configUUID:(id)a3 receivedDate:(id)a4 startDate:(id)a5 endDate:(id)a6 payload:(id)a7 payloadIsJSON:(BOOL)a8 skipHysteresis:(BOOL)a9;
- (id)initWithJSONDict:(id)a0 receivedDate:(id)a1;
- (id)jsonDictRepresentation;

@end
