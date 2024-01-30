@class NSString, SISchemaGridCardSection, NSData, SISchemaSiriResponseContext;

@interface SISchemaUUFRShown : PBCodable {
    struct { unsigned char siriUILocation : 1; unsigned char viewRegionDesignation : 1; } _has;
}

@property (copy, nonatomic) NSString *viewID;
@property (nonatomic) BOOL hasViewID;
@property (copy, nonatomic) NSString *snippetClass;
@property (nonatomic) BOOL hasSnippetClass;
@property (nonatomic) int siriUILocation;
@property (nonatomic) BOOL hasSiriUILocation;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) BOOL hasDialogIdentifier;
@property (retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext;
@property (nonatomic) BOOL hasSiriResponseContext;
@property (copy, nonatomic) NSString *aceViewID;
@property (nonatomic) BOOL hasAceViewID;
@property (copy, nonatomic) NSString *aceViewClass;
@property (nonatomic) BOOL hasAceViewClass;
@property (nonatomic) int viewRegionDesignation;
@property (nonatomic) BOOL hasViewRegionDesignation;
@property (retain, nonatomic) SISchemaGridCardSection *gridCardSection;
@property (nonatomic) BOOL hasGridCardSection;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichSubsection;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
