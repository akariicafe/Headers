@class EFSQLPropertyMapper, EFMutableInt64Set, EDSearchableIndex;

@interface _MFSQLGenerationContext : NSObject {
    EDSearchableIndex *searchableIndex;
    EFMutableInt64Set *mailboxIDs;
    unsigned int tables;
    unsigned int baseTable;
    EFSQLPropertyMapper *propertyMapper;
    BOOL usedBaseTable;
    BOOL haveLibraryIDCriterion;
    BOOL protectedDataAvailable;
}

- (void).cxx_destruct;

@end
