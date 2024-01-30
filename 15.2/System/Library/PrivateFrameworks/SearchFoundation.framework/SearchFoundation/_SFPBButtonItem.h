@class _SFPBCoreSpotlightButtonItem, NSString, _SFPBWatchListButtonItem, _SFPBCommandButtonItem, _SFPBContactButtonItem, NSData;

@interface _SFPBButtonItem : PBCodable <_SFPBButtonItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBCommandButtonItem *commandButtonItem;
@property (retain, nonatomic) _SFPBContactButtonItem *contactButtonItem;
@property (retain, nonatomic) _SFPBCoreSpotlightButtonItem *coreSpotlightButtonItem;
@property (retain, nonatomic) _SFPBWatchListButtonItem *watchListButtonItem;
@property (nonatomic) unsigned long long uniqueId;
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
