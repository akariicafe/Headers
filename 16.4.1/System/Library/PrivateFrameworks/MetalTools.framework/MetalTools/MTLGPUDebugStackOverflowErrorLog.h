@class NSString;

@interface MTLGPUDebugStackOverflowErrorLog : MTLGPUDebugGPULog

@property (retain, nonatomic) NSString *functionName;

- (id)description;

@end
