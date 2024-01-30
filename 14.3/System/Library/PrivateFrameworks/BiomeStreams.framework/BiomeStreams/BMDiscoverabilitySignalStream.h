@class NSString;

@interface BMDiscoverabilitySignalStream : NSObject <BMStream, BMSourceStream>

@property (readonly, nonatomic) NSString *identifier;

- (id)source;

@end
