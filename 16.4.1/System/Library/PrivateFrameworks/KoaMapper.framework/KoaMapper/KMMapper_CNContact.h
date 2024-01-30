@class NSString, KVItemBuilder, NSNumber;

@interface KMMapper_CNContact : NSObject <KMMapper> {
    KVItemBuilder *_builder;
    NSNumber *_meCardIdentifierKey;
    NSNumber *_alternativeItemIdKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

- (long long)targetItemType;
- (id)init;
- (id)itemsFromExternalObject:(id)a0 additionalFields:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)_addLabeledFieldsOfType:(long long)a0 labeledValues:(id)a1 labelOnly:(BOOL)a2 error:(id *)a3;

@end
