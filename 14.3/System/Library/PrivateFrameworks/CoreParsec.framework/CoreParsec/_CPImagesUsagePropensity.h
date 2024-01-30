@class NSData, NSString;

@interface _CPImagesUsagePropensity : PBCodable <_CPImagesUsagePropensity, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float zkw;
@property (nonatomic) float recentResult;
@property (nonatomic) float other;
@property (nonatomic) float querySuggestion;
@property (nonatomic) float image;
@property (nonatomic) int totalEngagements;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
