@class NSString;

@interface _INPBSeat : PBCodable <_INPBSeat, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *seatNumber;
@property (readonly, nonatomic) BOOL hasSeatNumber;
@property (copy, nonatomic) NSString *seatRow;
@property (readonly, nonatomic) BOOL hasSeatRow;
@property (copy, nonatomic) NSString *seatSection;
@property (readonly, nonatomic) BOOL hasSeatSection;
@property (copy, nonatomic) NSString *seatingType;
@property (readonly, nonatomic) BOOL hasSeatingType;
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
