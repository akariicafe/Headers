@class NSArray, NSString, NSData, GEOUserSessionEntity, PARReply, NSDictionary;

@interface PARResponse : NSObject

@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) GEOUserSessionEntity *geoUserSessionEntity;
@property (readonly, nonatomic) NSData *legacyJSON;
@property (readonly, nonatomic) PARReply *reply;
@property (readonly, nonatomic) NSString *prefix;
@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) NSArray *rawResponse;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSDictionary *rawSqf;
@property (readonly, nonatomic) NSDictionary *serverFeatures;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSArray *corrections;
@property (readonly, nonatomic) BOOL suggestionsAreBlended;

+ (id)responseFromReply:(id)a0;
+ (id)responseFromData:(id)a0 session:(id)a1 request:(id)a2;
+ (id)responseFromJSON:(id)a0 session:(id)a1;

- (void).cxx_destruct;
- (id)initWithReply:(id)a0;
- (id)initWithReply:(id)a0 factory:(id)a1 responseV2:(id)a2;
- (BOOL)compareWithResponse:(id)a0 logger:(id /* block */)a1;

@end
