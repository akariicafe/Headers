@interface WorkflowUI.SmartPromptsViewModel : _TtCs12_SwiftObject <WFDatabaseObjectObserver> {
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ workflow;
    void /* unknown type, empty encoding */ workflowReference;
    void /* unknown type, empty encoding */ states;
    void /* unknown type, empty encoding */ _deletionAuthorizations;
    void /* unknown type, empty encoding */ _statesByAction;
    void /* unknown type, empty encoding */ _wildcardStates;
    void /* unknown type, empty encoding */ actionsByActionUUID;
    void /* unknown type, empty encoding */ actionsByActionIdentifier;
}

- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;

@end
