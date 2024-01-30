@class _INPBDataString, NSString, _INPBIntentMetadata;

@interface _INPBActivateCarSignalIntent : PBCodable <_INPBActivateCarSignalIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _signals;
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *carName;
@property (readonly, nonatomic) BOOL hasCarName;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) int *signals;
@property (readonly, nonatomic) unsigned long long signalsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearSignals;
- (int)signalsAtIndex:(unsigned long long)a0;
- (void)setSignals:(int *)a0 count:(unsigned long long)a1;
- (id)signalsAsString:(int)a0;
- (int)StringAsSignals:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSignals:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
