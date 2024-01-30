@class NSString, NSMeasurement;

@interface INCarChargingConnectorPower : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *chargingConnector;
@property (readonly, copy, nonatomic) NSMeasurement *maximumPower;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithChargingConnector:(id)a0 maximumPower:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
