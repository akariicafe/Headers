@class NSString, NSIndexPath;

@interface UITableViewPlaceholder : NSObject

@property (retain, nonatomic) NSIndexPath *insertionIndexPath;
@property (retain, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) double rowHeight;
@property (copy, nonatomic) id /* block */ cellUpdateHandler;

- (void).cxx_destruct;
- (id)initWithInsertionIndexPath:(id)a0 reuseIdentifier:(id)a1 rowHeight:(double)a2;

@end
