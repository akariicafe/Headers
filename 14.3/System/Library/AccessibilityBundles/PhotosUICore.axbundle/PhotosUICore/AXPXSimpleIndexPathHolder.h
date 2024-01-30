@interface AXPXSimpleIndexPathHolder : NSObject

@property (nonatomic) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } indexPath;

- (id)initWithIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;

@end
