@class NSArray, NSString;

@interface TSPUnknownContentSnapshot : NSObject <TSPKnownFieldRuleProvider> {
    NSArray *_preserveFields;
    NSArray *_preserveUntilModifiedFields;
    BOOL _shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration;
}

@property (readonly, nonatomic) NSArray *messages;
@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)enumerateKnownFieldRulesUsingBlock:(id /* block */)a0;
- (id)initWithMessages:(id)a0 preserveFields:(id)a1 preserveUntilModifiedFields:(id)a2 shouldIncludePreserveUntilModifiedFieldsInKnownFieldRuleEnumeration:(BOOL)a3;
- (id)newFieldTree;
- (id)newUnknownContentSnapshotWithMessages:(id)a0;
- (void)updateMessageInfo:(void *)a0;

@end
