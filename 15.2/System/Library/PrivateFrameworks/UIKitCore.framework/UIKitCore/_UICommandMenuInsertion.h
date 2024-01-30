@class NSString, NSArray;

@interface _UICommandMenuInsertion : _UICommandChange

@property (readonly, nonatomic) NSString *anchor;
@property (readonly, nonatomic) NSArray *fallbacks;
@property (readonly, nonatomic) NSArray *insertsAtStart;
@property (readonly, nonatomic) NSArray *insertsAtEnd;
@property (readonly, nonatomic) NSArray *insertsBefore;
@property (readonly, nonatomic) NSArray *insertsAfter;

+ (id)insertionWithAnchor:(id)a0 fallbacks:(id)a1 insertsAtStart:(id)a2 insertsAtEnd:(id)a3 insertsBefore:(id)a4 insertsAfter:(id)a5;
+ (BOOL)supportsSecureCoding;

- (BOOL)acceptBoolItemInsertionVisit:(id /* block */)a0 itemDeletionVisit:(id /* block */)a1 menuInsertionVisit:(id /* block */)a2 menuDeletionVisit:(id /* block */)a3;
- (void)acceptItemInsertionVisit:(id /* block */)a0 itemDeletionVisit:(id /* block */)a1 menuInsertionVisit:(id /* block */)a2 menuDeletionVisit:(id /* block */)a3;
- (id)initWithAnchor:(id)a0 fallbacks:(id)a1 insertsAtStart:(id)a2 insertsAtEnd:(id)a3 insertsBefore:(id)a4 insertsAfter:(id)a5;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
