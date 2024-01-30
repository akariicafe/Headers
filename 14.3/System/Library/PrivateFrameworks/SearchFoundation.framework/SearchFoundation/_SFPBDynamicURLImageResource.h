@class NSString, NSArray, NSData, _SFPBGraphicalFloat;

@interface _SFPBDynamicURLImageResource : PBCodable <_SFPBDynamicURLImageResource, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBGraphicalFloat *pixelWidth;
@property (retain, nonatomic) _SFPBGraphicalFloat *pixelHeight;
@property (copy, nonatomic) NSString *formatURL;
@property (nonatomic) BOOL supportsResizing;
@property (copy, nonatomic) NSArray *imageOptions;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)addImageOptions:(id)a0;
- (void)clearImageOptions;
- (unsigned long long)imageOptionsCount;
- (id)imageOptionsAtIndex:(unsigned long long)a0;

@end
