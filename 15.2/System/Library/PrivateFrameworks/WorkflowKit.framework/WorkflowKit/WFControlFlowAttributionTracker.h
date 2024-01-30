@class NSMutableDictionary;

@interface WFControlFlowAttributionTracker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *attributionSetsInScope;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithAttributionSetsInScope:(id)a0;
- (void)enteredScopeOfControlFlowAction:(id)a0 withInput:(id)a1;
- (void)leftScopeOfControlFlowAction:(id)a0;
- (id)contentCollectionByTaintingContentCollection:(id)a0;
- (id)attributionSetForCurrentScope;

@end
