@class _SFPBCoreSpotlightCopyItem, _SFPBImageCopyItem, NSString, NSData, _SFPBTextCopyItem;

@interface _SFPBCopyItem : PBCodable <_SFPBCopyItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBTextCopyItem *textCopyItem;
@property (retain, nonatomic) _SFPBCoreSpotlightCopyItem *spotlightCopyItem;
@property (retain, nonatomic) _SFPBImageCopyItem *imageCopyItem;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
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

@end
