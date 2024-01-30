@class NSArray, _UICommandIdentifier;

@interface _UICommandItemInsertion : _UICommandChange

@property (readonly, nonatomic) _UICommandIdentifier *anchor;
@property (readonly, nonatomic) NSArray *fallbacks;
@property (readonly, nonatomic) NSArray *insertsBefore;
@property (readonly, nonatomic) NSArray *insertsAfter;

+ (BOOL)supportsSecureCoding;
+ (id)insertionWithAnchor:(id)a0 fallbacks:(id)a1 insertsBefore:(id)a2 insertsAfter:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptBoolItemInsertionVisit:(id /* block */)a0 itemDeletionVisit:(id /* block */)a1 menuInsertionVisit:(id /* block */)a2 menuDeletionVisit:(id /* block */)a3;
- (void)acceptItemInsertionVisit:(id /* block */)a0 itemDeletionVisit:(id /* block */)a1 menuInsertionVisit:(id /* block */)a2 menuDeletionVisit:(id /* block */)a3;
- (id)initWithAnchor:(id)a0 fallbacks:(id)a1 insertsBefore:(id)a2 insertsAfter:(id)a3;

@end
