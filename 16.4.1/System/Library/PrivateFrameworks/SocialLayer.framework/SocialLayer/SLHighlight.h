@class NSArray, NSString, NSURL, NSDate, NSNumber, NSDictionary;

@interface SLHighlight : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *attributions;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) BOOL isLocalResource;
@property (readonly, nonatomic) BOOL isSyndicatableMedia;
@property (readonly, copy, nonatomic) NSURL *livePhotoComplementURL;
@property (readonly, copy, nonatomic) NSString *resourceUTI;
@property (readonly, nonatomic) unsigned long long syndicationType;
@property (readonly, copy, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *resourceURL;
@property (readonly, copy, nonatomic) NSDictionary *supplementaryData;

+ (id)Sha256ForData:(id)a0 withSalt:(id)a1;
+ (id)requiredSpotlightAttributeKeys;
+ (id)errorForHighlightDomain:(id)a0 andCode:(long long)a1 andUnderlyingError:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCSSearchableItem:(id)a0 error:(id *)a1;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 forContentType:(unsigned char)a1 error:(id *)a2;
- (id)_uniqueIdentifierForResourceURL:(id)a0;
- (id)initWithAttribution:(id)a0;
- (id)initWithCSSearchableItem:(id)a0;
- (id)initWithPortraitHighlight:(id)a0 error:(id *)a1;
- (id)portraitHighlight;

@end
