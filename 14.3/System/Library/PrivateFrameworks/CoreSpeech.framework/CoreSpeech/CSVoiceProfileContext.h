@class NSString, NSNumber;

@interface CSVoiceProfileContext : NSObject

@property (retain, nonatomic) NSString *profileId;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *productCategory;
@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) unsigned long long onboardType;
@property (retain, nonatomic) NSString *homeId;
@property (retain, nonatomic) NSString *userName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSharedSiriId:(id)a0 languageCode:(id)a1 productCategory:(id)a2 version:(id)a3 sharedHomeId:(id)a4 userName:(id)a5;

@end
