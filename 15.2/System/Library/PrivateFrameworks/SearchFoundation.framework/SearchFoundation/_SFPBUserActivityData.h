@class NSString, NSArray, NSData;

@interface _SFPBUserActivityData : PBCodable <_SFPBUserActivityData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSArray *userInfos;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)setUserInfo:(id)a0;
- (void)addUserInfo:(id)a0;
- (void)clearUserInfo;
- (unsigned long long)userInfoCount;
- (id)userInfoAtIndex:(unsigned long long)a0;

@end
