@class OSLogEventStreamPosition;

@interface DTOSLogLoaderFetchTicket : DTOSLogLoaderTicket

@property (nonatomic) double windowInSeconds;
@property (retain, nonatomic) OSLogEventStreamPosition *currentPosition;

- (void).cxx_destruct;
- (void)holdAgent:(id)a0 loader:(id)a1;
- (void)prepareAgent:(id)a0 loader:(id)a1;

@end
