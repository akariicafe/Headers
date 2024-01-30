@class NSString, NSMutableDictionary;

@interface CNVCardParsedDictionaryResultBuilder : NSObject <CNVCardParsedResultBuilder> {
    NSMutableDictionary *_dictionaryRep;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factory;

- (id)valueForProperty:(id)a0;
- (BOOL)setImageData:(id)a0;
- (id)build;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canSetValueForProperty:(id)a0;
- (BOOL)setValues:(id)a0 labels:(id)a1 isPrimaries:(id)a2 forProperty:(id)a3;
- (id)validCountryCodes;
- (BOOL)setImageData:(id)a0 forReference:(id)a1 clipRects:(id)a2;
- (void)setUnknownProperties:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;

@end
