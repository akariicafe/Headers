@class NSDictionary, NSString;

@interface INParameterContexts : NSObject <INJSONSerializable>

@property (retain, nonatomic, setter=_setSuggestedValuesDictionary:) NSDictionary *_suggestedValuesDictionary;
@property (retain, nonatomic, setter=_setTypedSuggestedValuesDictionary:) NSDictionary *_typedSuggestedValuesDictionary;
@property (retain, nonatomic, setter=_setOperatorsDictionary:) NSDictionary *_operatorsDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (BOOL)_isEmpty;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;
- (id)_initWithIntent:(id)a0 decoder:(id)a1 JSONDictionary:(id)a2;
- (void)_updateOperatorsForIntent:(id)a0 JSONDictionary:(id)a1;
- (void)_updateSuggestedValuesForIntent:(id)a0 decoder:(id)a1 JSONDictionary:(id)a2;

@end
