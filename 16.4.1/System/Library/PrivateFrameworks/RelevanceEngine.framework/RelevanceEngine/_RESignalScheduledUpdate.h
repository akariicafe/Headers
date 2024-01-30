@class NSDate;

@interface _RESignalScheduledUpdate : NSObject

@property (nonatomic) double interval;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSDate *lastFireDate;

- (void).cxx_destruct;

@end
