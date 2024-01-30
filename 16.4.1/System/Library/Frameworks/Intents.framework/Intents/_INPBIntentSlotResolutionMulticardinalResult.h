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

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addResolutionResults:(id)a0;
- (void)clearResolutionResults;
- (id)resolutionResultsAtIndex:(unsigned long long)a0;

@end
