@class NSString, _INPBAirport;

@interface _INPBAirportGate : PBCodable <_INPBAirportGate, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBAirport *airport;
@property (readonly, nonatomic) BOOL hasAirport;
@property (copy, nonatomic) NSString *gate;
@property (readonly, nonatomic) BOOL hasGate;
@property (copy, nonatomic) NSString *terminal;
@property (readonly, nonatomic) BOOL hasTerminal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;

@end
