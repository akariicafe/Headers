@class NSMutableDictionary, NSMutableOrderedSet;

@interface _EFSQLInsertStatementValue : NSObject {
    NSMutableOrderedSet *_requiredColumns;
    NSMutableDictionary *_bindables;
    NSMutableDictionary *_expressables;
}

- (void).cxx_destruct;

@end
