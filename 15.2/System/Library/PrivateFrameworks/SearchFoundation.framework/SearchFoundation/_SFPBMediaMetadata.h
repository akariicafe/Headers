@class NSString, NSArray, NSData;

@interface _SFPBMediaMetadata : PBCodable <_SFPBMediaMetadata, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *mediaName;
@property (nonatomic) int mediaType;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSArray *mediaPunchouts;
@property (copy, nonatomic) NSArray *bundleIdentifiersToExcludes;
@property (copy, nonatomic) NSString *disambiguationTitle;
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
- (void)addMediaPunchouts:(id)a0;
- (void)addBundleIdentifiersToExclude:(id)a0;
- (void)clearMediaPunchouts;
- (unsigned long long)mediaPunchoutsCount;
- (id)mediaPunchoutsAtIndex:(unsigned long long)a0;
- (void)clearBundleIdentifiersToExclude;
- (unsigned long long)bundleIdentifiersToExcludeCount;
- (id)bundleIdentifiersToExcludeAtIndex:(unsigned long long)a0;
- (void)setBundleIdentifiersToExclude:(id)a0;

@end
