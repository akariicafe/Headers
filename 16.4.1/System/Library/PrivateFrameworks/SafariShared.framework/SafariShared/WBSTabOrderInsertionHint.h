@protocol WBSOrderedTab;

@interface WBSTabOrderInsertionHint : NSObject

@property (readonly, nonatomic) id<WBSOrderedTab> tabToInsertAfter;
@property (readonly, nonatomic) unsigned long long insertionIndex;
@property (readonly, nonatomic) unsigned long long relationType;

- (void).cxx_destruct;
- (id)initWithTabToInsertAfter:(id)a0 insertionIndex:(unsigned long long)a1 relation:(unsigned long long)a2;
- (id)initWithTabToInsertAfter:(id)a0 relation:(unsigned long long)a1;

@end
