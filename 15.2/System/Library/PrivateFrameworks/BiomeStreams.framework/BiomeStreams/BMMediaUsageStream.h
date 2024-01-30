@class NSString;

@interface BMMediaUsageStream : NSObject <BMSourceStream>

@property (readonly, nonatomic) NSString *identifier;

- (id)source;

@end
