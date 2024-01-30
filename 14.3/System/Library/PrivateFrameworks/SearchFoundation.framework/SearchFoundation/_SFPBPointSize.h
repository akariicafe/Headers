@class _SFPBGraphicalFloat, NSData, NSString;

@interface _SFPBPointSize : PBCodable <_SFPBPointSize, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBGraphicalFloat *width;
@property (retain, nonatomic) _SFPBGraphicalFloat *height;
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
- (id)initWithCGSize:(struct CGSize { double x0; double x1; })a0;

@end
