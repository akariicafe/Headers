@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableSet *clientTypes;

- (void)remove:(id)a0;
- (void)removeAll;
- (void)add:(id)a0;
- (void)removeRequestsOfClientType:(unsigned char)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAdvertisingForClientType:(unsigned char)a0;
- (unsigned long long)count;
- (id)allRequests;

@end
