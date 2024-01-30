@class NSMutableDictionary;

@interface WFControlFlowAttributionTracker : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *attributionSetsInScope;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAttributionSetsInScope:(id)a0;
- (id)attributionSetForCurrentScope;
- (id)contentCollectionByTaintingContentCollection:(id)a0;
- (void)enteredScopeOfControlFlowAction:(id)a0 withInput:(id)a1;
- (void)leftScopeOfControlFlowAction:(id)a0;

@end
