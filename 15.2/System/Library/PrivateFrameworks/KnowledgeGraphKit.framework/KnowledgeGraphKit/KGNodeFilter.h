@interface KGNodeFilter : KGElementFilter

@property (class, readonly, nonatomic) KGNodeFilter *any;

- (BOOL)matchesNode:(id)a0;

@end
