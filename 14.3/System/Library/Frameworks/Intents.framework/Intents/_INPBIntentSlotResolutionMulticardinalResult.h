@class NSArray, NSString;

@interface _INPBIntentSlotResolutionMulticardinalResult : PBCodable <_INPBIntentSlotResolutionMulticardinalResult, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *resolutionResults;
@property (readonly, nonatomic) unsigned long long resolutionResultsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)resolutionResultsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearResolutionResults;
- (void)addResolutionResults:(id)a0;
- (id)resolutionResultsAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
