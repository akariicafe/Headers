@class NSString, NSDictionary, KVItemBuilder;

@interface KMMapper_SASyncSiriKitAppVocabulary : NSObject <KMMapper> {
    NSDictionary *_ontologyNodeToFieldTypeMap;
    KVItemBuilder *_builder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)externalObjectClass;

@end
