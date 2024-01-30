@class NSString, KVItemBuilder, NSNumber;

@interface KMMapper_INVocabularyItem : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    unsigned int _itemCounter;
    NSNumber *_intentSlotNameKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;
+ (id)_fieldTypeNumberForIntentSlotName:(id)a0;
+ (long long)fieldTypeForIntentSlotName:(id)a0;

@end
