@class NSMutableArray;

@interface PLContentChanges : NSObject

@property (retain, nonatomic) NSMutableArray *container;
@property (retain, nonatomic) NSMutableArray *updatedContent;

- (void).cxx_destruct;
- (void)cleanupState;

@end
