@class NSString;

@interface _UIAutologgingDeallocSentinel : NSObject

@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL called;

- (void).cxx_destruct;
- (void)dealloc;

@end
