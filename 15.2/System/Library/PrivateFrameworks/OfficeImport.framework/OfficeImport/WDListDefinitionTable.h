@class WDDocument, NSMutableDictionary, WDListDefinition, NSMutableArray;

@interface WDListDefinitionTable : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mListDefinitions;
    NSMutableDictionary *mListDefinitionMapById;
    NSMutableDictionary *mListDefinitionMapByStyleId;
    WDListDefinition *mNullListDefinition;
    WDListDefinition *mDefaultListDefinition;
}

- (id)description;
- (void).cxx_destruct;
- (id)definitions;
- (id)initWithDocument:(id)a0;
- (id)addDefinitionWithDefinitionId:(int)a0 styleId:(id)a1;
- (id)resolvedDefinitionWithDefinitionId:(int)a0;
- (id)definitionWithDefinitionId:(int)a0;
- (id)definitionWithStyleId:(id)a0;

@end
