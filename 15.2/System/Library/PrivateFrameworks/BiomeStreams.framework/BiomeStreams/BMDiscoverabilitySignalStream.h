@class NSString;

@interface BMDiscoverabilitySignalStream : NSObject <BMSourceStream>

@property (readonly, nonatomic) NSString *identifier;

- (id)source;

@end
