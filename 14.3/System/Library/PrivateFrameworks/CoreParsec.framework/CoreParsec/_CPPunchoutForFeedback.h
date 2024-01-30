@class NSString, NSArray, NSData;

@interface _CPPunchoutForFeedback : PBCodable <_CPPunchoutForFeedback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) int knownBundleIdentifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichBundleid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)urlsCount;
- (void)clearUrls;
- (BOOL)readFrom:(id)a0;
- (void)addUrls:(id)a0;
- (void)writeTo:(id)a0;
- (id)feedbackJSON;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearBundleid;
- (id)urlsAtIndex:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
