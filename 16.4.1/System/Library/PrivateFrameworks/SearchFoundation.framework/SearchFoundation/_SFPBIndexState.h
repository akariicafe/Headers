@class NSData, NSString;

@interface _SFPBIndexState : PBCodable <_SFPBIndexState, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int percentMessagesIndexed;
@property (nonatomic) int percentAttachmentsIndexed;
@property (nonatomic) int searchIndex;
@property (nonatomic) int totalMessageCount;
@property (nonatomic) int indexedMessageCount;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;

@end
