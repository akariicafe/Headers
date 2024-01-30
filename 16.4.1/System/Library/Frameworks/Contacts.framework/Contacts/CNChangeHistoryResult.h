@class NSArray, CNChangeHistoryAnchor;

@interface CNChangeHistoryResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL changesTruncated;
@property (retain, nonatomic) CNChangeHistoryAnchor *latestChangeAnchor;
@property (retain, nonatomic) NSArray *contactChanges;
@property (retain, nonatomic) NSArray *groupChanges;
@property (retain, nonatomic) NSArray *labeledValueChanges;
@property (nonatomic) BOOL unifyResults;
@property (nonatomic) long long changesCount;

- (void)encodeWithCoder:(id)a0;
- (id)groupChangesEnumeratorWithContactStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)contactChangesEnumeratorWithKeysToFetch:(id)a0 contactStore:(id)a1;
- (BOOL)enumerateContactChangesWithKeysToFetch:(id)a0 fromContactStore:(id)a1 error:(id *)a2 usingBlock:(id /* block */)a3;
- (id)labeledValueChangesEnumeratorWithContactStore:(id)a0;
- (id)description;
- (BOOL)enumerateGroupChangesFromContactStore:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
