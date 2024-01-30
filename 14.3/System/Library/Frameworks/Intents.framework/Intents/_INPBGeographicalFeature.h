@class NSArray, NSString, _INPBString;

@interface _INPBGeographicalFeature : PBCodable <_INPBGeographicalFeature, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *geographicalFeatureDescriptors;
@property (readonly, nonatomic) unsigned long long geographicalFeatureDescriptorsCount;
@property (retain, nonatomic) _INPBString *geographicalFeatureType;
@property (readonly, nonatomic) BOOL hasGeographicalFeatureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)geographicalFeatureDescriptorsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearGeographicalFeatureDescriptors;
- (void)addGeographicalFeatureDescriptors:(id)a0;
- (id)geographicalFeatureDescriptorsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
