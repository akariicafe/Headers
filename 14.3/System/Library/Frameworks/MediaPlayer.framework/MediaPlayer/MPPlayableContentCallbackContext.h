@class NSIndexPath;

@interface MPPlayableContentCallbackContext : NSObject

@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL serviced;

- (void).cxx_destruct;
- (id)initWithIndexPath:(id)a0;

@end
