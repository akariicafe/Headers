@class NSString, NSMutableArray, NSRegularExpression;

@interface PLSqliteQueryPlan : NSObject {
    NSMutableArray *_nodes;
    NSRegularExpression *_stringRepresentationRegex;
}

@property (readonly, copy) NSString *graphDescription;
@property (readonly, copy) NSString *listDescription;

- (id)_stringRepresentationRegex;
- (void)addNodeWithStringRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addNodeWithIdentifier:(int)a0 parentIdentifier:(int)a1 unused:(int)a2 nodeDescription:(id)a3;
- (void)_renderLevelWithParentIdentifier:(int)a0 prefix:(id)a1 intoLines:(id)a2;

@end
