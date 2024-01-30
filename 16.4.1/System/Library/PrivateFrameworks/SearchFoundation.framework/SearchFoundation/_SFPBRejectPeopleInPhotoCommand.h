@class NSArray, NSString, NSData, _SFPBPhotosLibraryImage;

@interface _SFPBRejectPeopleInPhotoCommand : PBCodable <_SFPBRejectPeopleInPhotoCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *rejectedPeoples;
@property (retain, nonatomic) _SFPBPhotosLibraryImage *photosLibraryImage;
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
- (void).cxx_destruct;
- (void)addRejectedPeople:(id)a0;
- (void)clearRejectedPeople;
- (id)rejectedPeopleAtIndex:(unsigned long long)a0;
- (unsigned long long)rejectedPeopleCount;
- (void)setRejectedPeople:(id)a0;

@end
