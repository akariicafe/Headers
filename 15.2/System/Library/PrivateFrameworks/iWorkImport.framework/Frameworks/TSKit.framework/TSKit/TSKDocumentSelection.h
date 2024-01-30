@class TSKDocumentRoot;

@interface TSKDocumentSelection : TSKSelection

@property (readonly, weak, nonatomic) TSKDocumentRoot *documentRoot;

+ (Class)archivedSelectionClass;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDocumentRoot:(id)a0;

@end
