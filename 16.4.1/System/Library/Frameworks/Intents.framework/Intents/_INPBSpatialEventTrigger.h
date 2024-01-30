@class NSArray, _INPBLocationValue, NSString;

@interface _INPBSpatialEventTrigger : PBCodable <_INPBSpatialEventTrigger, NSSecureCoding, NSCopying> {
    struct { unsigned char event : 1; unsigned char mobileSpace : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int event;
@property (nonatomic) BOOL hasEvent;
@property (retain, nonatomic) _INPBLocationValue *location;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) int mobileSpace;
@property (nonatomic) BOOL hasMobileSpace;
@property (copy, nonatomic) NSArray *suggestedValues;
@property (readonly, nonatomic) unsigned long long suggestedValuesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)suggestedValuesType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)StringAsEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)eventAsString:(int)a0;
- (void).cxx_destruct;
- (int)StringAsMobileSpace:(id)a0;
- (void)addSuggestedValues:(id)a0;
- (void)clearSuggestedValues;
- (id)mobileSpaceAsString:(int)a0;
- (id)suggestedValuesAtIndex:(unsigned long long)a0;

@end
