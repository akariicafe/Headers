@protocol ACCSSOTGTStoragePolicy, ACCTicketManagerProtocol;

@interface ACCComponents : ACFComponents

@property (retain, nonatomic) id<ACCSSOTGTStoragePolicy> tgtStoragePolicy;
@property (retain, nonatomic) id<ACCTicketManagerProtocol> ticketManager;

+ (id)components;
+ (id)defaultComponents;

- (void)dealloc;
- (id)createHandlerWithClass:(Class)a0 context:(id)a1;

@end
