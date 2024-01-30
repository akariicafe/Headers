@interface AXWebThreadPreparer : NSObject

@property (nonatomic) BOOL preparedThisRunLoop;
@property (nonatomic) BOOL preparedAnswer;

+ (id)sharedPreparer;

- (id)init;

@end
