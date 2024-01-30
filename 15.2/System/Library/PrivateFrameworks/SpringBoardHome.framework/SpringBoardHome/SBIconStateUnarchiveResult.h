@class SBRootFolder, NSDictionary, NSString, NSMutableSet, NSMutableArray;

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext, BSDescriptionProviding> {
    NSMutableArray *_folderStack;
    long long _parseDepth;
    NSMutableSet *_nodeIdentifiersUnarchived;
    NSMutableSet *_widgetUniqueIdentifiersUnarchived;
    BOOL _corrupted;
    BOOL _dirty;
}

@property (retain, nonatomic, setter=_setRootFolder:) SBRootFolder *rootFolder;
@property (copy, nonatomic, setter=_setMetadata:) NSDictionary *metadata;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isDirty) BOOL dirty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_noteWidgetUniqueIdentifierWasUnarchived:(id)a0;
- (id)_popFolder;
- (BOOL)_isNodeIdentifierAlreadyUnarchived:(id)a0;
- (id)succinctDescription;
- (void)_noteExitedNode;
- (void).cxx_destruct;
- (id)_currentFolder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)_currentParseDepth;
- (void)_noteNodeIdentifierWasUnarchived:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_pushFolder:(id)a0;
- (void)_noteSignificantDeviation;
- (void)_noteRepresentationIsCorrupted;
- (BOOL)_isWidgetUniqueIdentifierAlreadyUnarchived:(id)a0;
- (void)_noteEnteredNode;

@end
