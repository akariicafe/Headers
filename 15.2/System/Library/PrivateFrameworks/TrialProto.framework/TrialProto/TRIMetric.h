@class NSString, NSData;

@interface TRIMetric : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char integerValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (readonly, nonatomic) BOOL hasCategoricalValue;
@property (retain, nonatomic) NSString *categoricalValue;
@property (readonly, nonatomic) BOOL hasUserDefinedValue;
@property (retain, nonatomic) NSData *userDefinedValue;

+ (id)metricWithName:(id)a0 userDefinedValue:(id)a1;
+ (id)metricWithName:(id)a0 integerValue:(long long)a1;
+ (id)metricWithName:(id)a0 doubleValue:(double)a1;
+ (id)metricWithName:(id)a0;
+ (id)metricWithName:(id)a0 categoricalValue:(id)a1;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
