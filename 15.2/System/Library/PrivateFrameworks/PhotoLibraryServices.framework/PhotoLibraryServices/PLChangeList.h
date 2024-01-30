@class NSMutableSet;

@interface PLChangeList : NSObject

@property (retain, nonatomic) NSMutableSet *inserted;
@property (retain, nonatomic) NSMutableSet *updated;
@property (retain, nonatomic) NSMutableSet *deleted;

- (void)cleanupState;
- (void).cxx_destruct;

@end
