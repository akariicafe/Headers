@interface ASProtocolCapabilities12_1 : ASProtocolCapabilities

- (BOOL)supportsMailboxSearch;
- (BOOL)supportsEmailFlagging;
- (BOOL)supportsProtocolVersion:(id)a0;
- (BOOL)supportsSettingsCommand;
- (BOOL)supportsItemOperationsCommand;
- (id)_calConstraintsPlistPath;

@end
