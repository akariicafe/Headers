@class NSData;

@interface SCROBrailleLineVirtualStatus : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) int alignment;
@property (nonatomic) long long length;
@property (nonatomic) char *cells;

- (void)dealloc;
- (void).cxx_destruct;

@end
