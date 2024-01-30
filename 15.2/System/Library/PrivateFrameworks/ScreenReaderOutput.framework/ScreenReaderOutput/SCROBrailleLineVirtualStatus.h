@class NSData;

@interface SCROBrailleLineVirtualStatus : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) int alignment;
@property (nonatomic) long long length;
@property (nonatomic) char *cells;

- (void).cxx_destruct;
- (void)dealloc;

@end
