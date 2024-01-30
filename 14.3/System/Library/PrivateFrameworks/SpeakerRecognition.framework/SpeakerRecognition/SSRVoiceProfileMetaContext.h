@class NSString, NSNumber, NSDate;

@interface SSRVoiceProfileMetaContext : NSObject

@property (retain, nonatomic) NSString *appDomain;
@property (retain, nonatomic) NSString *profileId;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *productCategory;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSDate *dateAdded;
@property (retain, nonatomic) NSNumber *pitch;
@property (retain, nonatomic) NSString *sharedSiriId;
@property (retain, nonatomic) NSString *homeId;
@property (retain, nonatomic) NSString *userName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithVoiceProfile:(id)a0;
- (id)initWithSharedSiriId:(id)a0 languageCode:(id)a1 productCategory:(id)a2 version:(id)a3;

@end
