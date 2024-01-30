@class NSRunLoop;

@interface DARunLoopRegistry : NSObject

@property (class, readonly, nonatomic) NSRunLoop *sharedRunLoop;

@end
