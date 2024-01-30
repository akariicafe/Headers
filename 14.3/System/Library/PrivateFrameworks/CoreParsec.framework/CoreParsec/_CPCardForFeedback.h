@class NSArray, NSString, NSData;

@interface _CPCardForFeedback : PBCodable <_CPCardForFeedback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *cardSections;
@property (copy, nonatomic) NSString *fbr;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addCardSections:(id)a0;
- (void)clearCardSections;
- (unsigned long long)cardSectionsCount;
- (id)cardSectionsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;

@end
