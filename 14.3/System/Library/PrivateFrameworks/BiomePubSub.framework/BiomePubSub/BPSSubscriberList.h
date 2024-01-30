@class NSMutableArray;

@interface BPSSubscriberList : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *tickets;
@property (nonatomic) long long nextTicket;

- (id)init;
- (void).cxx_destruct;
- (long long)appendElement:(id)a0;
- (id)claimAll;
- (void)removeTicket:(long long)a0;

@end
