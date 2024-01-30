@class TSKDocumentRoot;

@interface TSKDocumentSelection : TSKSelection

@property (readonly, weak, nonatomic) TSKDocumentRoot *documentRoot;

+ (Class)archivedSelectionClass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDocumentRoot:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
