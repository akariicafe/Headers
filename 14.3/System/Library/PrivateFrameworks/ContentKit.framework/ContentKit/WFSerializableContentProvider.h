@class NSMutableDictionary;

@interface WFSerializableContentProvider : NSObject

@property (readonly, nonatomic) NSMutableDictionary *entriesForClassNames;

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (id)serializedRepresentationForObject:(id)a0;
- (id)objectOfClass:(Class)a0 withSerializedRepresentation:(id)a1;
- (id)entryConsideringSuperclassesForClass:(Class)a0;
- (void)registerSerializableContentClasses;

@end
