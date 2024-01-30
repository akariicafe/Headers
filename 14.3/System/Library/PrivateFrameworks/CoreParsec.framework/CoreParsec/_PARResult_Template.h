@class NSString, NSData, NSArray;

@interface _PARResult_Template : PBCodable <_PARResult_Template, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *completion;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSData *completionIcon;
@property (copy, nonatomic) NSData *thumbnail;
@property (copy, nonatomic) NSData *cardData;
@property (copy, nonatomic) NSString *legacyTemplateName;
@property (copy, nonatomic) NSArray *renderings;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void)addRenderings:(id)a0;
- (void)clearRenderings;
- (unsigned long long)renderingsCount;
- (id)renderingsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
