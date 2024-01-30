@class NSSQLEntity, NSMutableArray, NSMutableDictionary;

@interface NSSQLEntity_DerivedAttributesExtension : NSObject {
    NSSQLEntity *_entity;
    struct __CFDictionary { } *_derivedAttributes;
    NSMutableArray *_triggerSQL;
    NSMutableDictionary *_migrationSQL;
}

- (void)addDerivationKeypath:(id)a0 forAttribute:(id)a1;
- (void)dealloc;
- (id)entity;
- (id)triggerSQL;
- (id)derivedAttributes;
- (id)initWithEntity:(id)a0;
- (void)_generateTriggerSQL;
- (id)migrationSQL;

@end
