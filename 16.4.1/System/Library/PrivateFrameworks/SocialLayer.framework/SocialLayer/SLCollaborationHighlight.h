@class _SWPersonIdentityProof, NSString, NSDictionary, SWPersonIdentity, NSDate;

@interface SLCollaborationHighlight : SLHighlight

@property (readonly, nonatomic) NSDictionary *earliestAttributionIdentifiers;
@property (readonly, nonatomic) NSString *fileProviderID;
@property (readonly, copy, nonatomic) SWPersonIdentity *localIdentity;
@property (readonly, copy, nonatomic) _SWPersonIdentityProof *localProofOfInclusion;
@property (readonly, copy, nonatomic) NSDictionary *handleToIdentityMap;
@property (readonly, copy, nonatomic) NSString *collaborationIdentifier;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *contentType;

+ (BOOL)supportsSecureCoding;
+ (id)requiredSpotlightAttributeKeysforHighlightType:(unsigned char)a0;
+ (id)errorForCollaborationHighlightDomain:(id)a0 andCode:(long long)a1 andUnderlyingError:(id *)a2;

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
- (id)initWithCSSearchableItemUniqueIdentifier:(id)a0 forContentType:(unsigned char)a1 error:(id *)a2;
- (id)initWithAttribution:(id)a0;
- (id)initWithPortraitCollaborationHighlight:(id)a0 error:(id *)a1;

@end
