@class NSString;

@interface BMMediaUsageStream : NSObject <BMStream, BMSourceStream>

@property (readonly, nonatomic) NSString *identifier;

- (id)source;

@end
