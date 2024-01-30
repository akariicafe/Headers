@class NSString, NSArray, INSpeakableString, INImage;

@interface INShortcutOverview : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) INSpeakableString *name;
@property (readonly, copy, nonatomic) INSpeakableString *voiceCommand;
@property (readonly, copy, nonatomic) INImage *icon;
@property (readonly, copy, nonatomic) INSpeakableString *descriptiveText;
@property (readonly, copy, nonatomic) NSArray *steps;
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
- (id)initWithName:(id)a0 voiceCommand:(id)a1 icon:(id)a2 descriptiveText:(id)a3 steps:(id)a4;

@end
