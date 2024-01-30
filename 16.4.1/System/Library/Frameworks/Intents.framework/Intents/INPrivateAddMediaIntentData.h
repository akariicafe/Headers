@class NSString, INPrivateMediaIntentData, NSArray;

@interface INPrivateAddMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) INPrivateMediaIntentData *privateMediaIntentData;
@property (readonly, copy, nonatomic) NSArray *audioSearchResults;
@property (readonly, copy, nonatomic) NSArray *internalSignals;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)_intents_cacheableObjects;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_intents_updateContainerWithCache:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAudioSearchResults:(id)a0;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1;
- (id)initWithPrivateMediaIntentData:(id)a0 audioSearchResults:(id)a1 internalSignals:(id)a2;

@end
