@class NSString, NSArray, NSDictionary, GEOUserSessionEntity, NSData, PARReply;

@interface PARResponse : NSObject

@property (retain, nonatomic) NSString *prefix;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSDictionary *rawSqf;
@property (retain, nonatomic) NSDictionary *serverFeatures;
@property (retain, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSArray *corrections;
@property (retain, nonatomic) GEOUserSessionEntity *geoUserSessionEntity;
@property (nonatomic) BOOL suggestionsAreBlended;
@property (retain, nonatomic) NSData *legacyJSON;
@property (retain, nonatomic) NSString *prefix;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSDictionary *rawSqf;
@property (retain, nonatomic) NSDictionary *serverFeatures;
@property (retain, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSArray *corrections;
@property (retain, nonatomic) GEOUserSessionEntity *geoUserSessionEntity;
@property (nonatomic) BOOL suggestionsAreBlended;
@property (retain, nonatomic) NSData *legacyJSON;
@property (readonly, nonatomic) PARReply *reply;
@property (readonly, nonatomic) NSArray *rawResponse;
@property (readonly, nonatomic) NSArray *alternativeResults;

+ (id)responseFromData:(id)a0 session:(id)a1 request:(id)a2;
+ (id)responseFromJSON:(id)a0 session:(id)a1;
+ (id)responseFromReply:(id)a0;

- (void).cxx_destruct;
- (id)initWithReply:(id)a0;
- (id)initWithReply:(id)a0 factory:(id)a1 dataZKW:(id)a2;

@end
