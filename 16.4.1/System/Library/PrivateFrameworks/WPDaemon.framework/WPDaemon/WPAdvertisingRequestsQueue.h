@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableSet *clientTypes;

- (void)add:(id)a0;
- (void)remove:(id)a0;
- (id)allRequests;
- (unsigned long long)count;
- (void)removeRequestsOfClientType:(unsigned char)a0;
- (BOOL)isAdvertisingForClientType:(unsigned char)a0;
- (void)removeAll;
- (id)init;
- (void).cxx_destruct;

@end
