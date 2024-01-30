@class NSString, NSMutableDictionary, NSArray, INImage;

@interface INObject : NSObject <INRuntimeObject, INJSONSerializable, INSpeakable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *_valueForKeyDictionary;
@property (copy, nonatomic) NSString *descriptionString;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayString;
@property (readonly, nonatomic) NSString *pronunciationHint;
@property (copy, nonatomic) NSString *subtitleString;
@property (retain, nonatomic) INImage *displayImage;
@property (retain, nonatomic) NSArray *alternativeSpeakableMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *spokenPhrase;
@property (readonly, nonatomic) NSString *vocabularyIdentifier;

+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)valueForUndefinedKey:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_intents_displayImageWithLocalizer:(id)a0;
- (id)_intents_localizedCopyWithLocalizer:(id)a0;
- (id)_intents_readableSubtitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 subtitleString:(id)a2 displayImage:(id)a3;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2 subtitleString:(id)a3 displayImage:(id)a4;
- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;

@end
