@class NSString, _SFPBURL, NSData, _SFPBPhotosLibraryImage;

@interface _SFPBMessageAttachment : PBCodable <_SFPBMessageAttachment, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int type;
@property (retain, nonatomic) _SFPBURL *url;
@property (copy, nonatomic) NSData *linkMetadata;
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

@end
