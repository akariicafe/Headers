@class NSString;

@interface _INPBActivateCarSignalIntentResponse : PBCodable <_INPBActivateCarSignalIntentResponse, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _signals;
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int *signals;
@property (readonly, nonatomic) unsigned long long signalsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (int)signalsAtIndex:(unsigned long long)a0;
- (void)setSignals:(int *)a0 count:(unsigned long long)a1;
- (id)signalsAsString:(int)a0;
- (int)StringAsSignals:(id)a0;
- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)clearSignals;
- (void)addSignals:(int)a0;
- (id)dictionaryRepresentation;

@end
