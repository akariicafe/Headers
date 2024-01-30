@class NSArray, _INPBPrivateMediaIntentData, NSString;

@interface _INPBPrivateSearchForMediaIntentData : PBCodable <_INPBPrivateSearchForMediaIntentData, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *audioSearchResults;
@property (readonly, nonatomic) unsigned long long audioSearchResultsCount;
@property (retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData;
@property (readonly, nonatomic) BOOL hasPrivateMediaIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)audioSearchResultsType;

- (void)clearAudioSearchResults;
- (void)addAudioSearchResults:(id)a0;
- (void).cxx_destruct;
- (id)audioSearchResultsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
