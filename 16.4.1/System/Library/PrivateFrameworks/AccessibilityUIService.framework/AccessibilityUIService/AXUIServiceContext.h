@class NSMutableArray;
@protocol NSCopying, NSObject, AXUIService;

@interface AXUIServiceContext : NSObject

@property (retain, nonatomic) id<AXUIService> service;
@property (copy, nonatomic) id<NSObject, NSCopying> serviceIdentifier;
@property (retain, nonatomic) NSMutableArray *clientMessengers;
@property (readonly, nonatomic) unsigned long long clientsCount;

- (BOOL)hasClientWithIdentifier:(id)a0;
- (void)enumerateClientsUsingBlock:(id /* block */)a0;
- (id)initWithService:(id)a0 serviceIdentifier:(id)a1;
- (void)addClientWithIdentifier:(id)a0 connection:(id)a1;
- (unsigned long long)_indexOfClientWithIdentifier:(id)a0;
- (void)removeClientWithIdentifier:(id)a0;
- (id)clientMessengerWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
