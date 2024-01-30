@class WDDocument, NSMutableDictionary, WDListDefinition, NSMutableArray;

@interface WDListDefinitionTable : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mListDefinitions;
    NSMutableDictionary *mListDefinitionMapById;
    NSMutableDictionary *mListDefinitionMapByStyleId;
    WDListDefinition *mNullListDefinition;
    WDListDefinition *mDefaultListDefinition;
}

- (id)initWithDocument:(id)a0;
- (id)definitions;
- (id)description;
- (void).cxx_destruct;
- (id)addDefinitionWithDefinitionId:(int)a0 styleId:(id)a1;
- (id)definitionWithDefinitionId:(int)a0;
- (id)definitionWithStyleId:(id)a0;
- (id)resolvedDefinitionWithDefinitionId:(int)a0;

@end
