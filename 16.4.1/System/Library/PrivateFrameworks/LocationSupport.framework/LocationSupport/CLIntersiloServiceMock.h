@class NSString, NSMutableDictionary;

@interface CLIntersiloServiceMock : CLIntersiloService <CLIntersiloServiceMockProtocol>

@property (retain, nonatomic) NSMutableDictionary *keyedPayloads;
@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endService;
- (void)beginService;
- (void).cxx_destruct;
- (id)getPayloadForKey:(id)a0;
- (id)getPayloadForSelector:(SEL)a0;
- (void)removePayloadForKey:(id)a0;
- (void)removePayloadForSelector:(SEL)a0;
- (void)setPayload:(id)a0 forKey:(id)a1;
- (void)setPayload:(id)a0 forSelector:(SEL)a1;
- (id)syncgetPayloadForKey:(id)a0;
- (id)syncgetPayloadForSelector:(SEL)a0;

@end
