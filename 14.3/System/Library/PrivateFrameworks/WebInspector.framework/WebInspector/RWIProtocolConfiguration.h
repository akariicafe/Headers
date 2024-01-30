@class RWIProtocolNetworkDomainEventDispatcher, RWIProtocolPageDomainEventDispatcher, RWIProtocolConsoleDomainEventDispatcher, RWIProtocolDOMDomainEventDispatcher, RWIProtocolCSSDomainEventDispatcher, RWIProtocolDOMStorageDomainEventDispatcher;
@protocol RWIProtocolDOMDomainHandler, RWIProtocolCSSDomainHandler, RWIProtocolDOMStorageDomainHandler, RWIProtocolNetworkDomainHandler, RWIProtocolPageDomainHandler;

@interface RWIProtocolConfiguration : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_controller;
    id<RWIProtocolCSSDomainHandler> _cssHandler;
    RWIProtocolCSSDomainEventDispatcher *_cssEventDispatcher;
    RWIProtocolConsoleDomainEventDispatcher *_consoleEventDispatcher;
    id<RWIProtocolDOMDomainHandler> _domHandler;
    RWIProtocolDOMDomainEventDispatcher *_domEventDispatcher;
    id<RWIProtocolDOMStorageDomainHandler> _domStorageHandler;
    RWIProtocolDOMStorageDomainEventDispatcher *_domStorageEventDispatcher;
    id<RWIProtocolNetworkDomainHandler> _networkHandler;
    RWIProtocolNetworkDomainEventDispatcher *_networkEventDispatcher;
    id<RWIProtocolPageDomainHandler> _pageHandler;
    RWIProtocolPageDomainEventDispatcher *_pageEventDispatcher;
}

@property (retain, nonatomic, setter=setCSSHandler:) id<RWIProtocolCSSDomainHandler> cssHandler;
@property (readonly, nonatomic) RWIProtocolCSSDomainEventDispatcher *cssEventDispatcher;
@property (readonly, nonatomic) RWIProtocolConsoleDomainEventDispatcher *consoleEventDispatcher;
@property (retain, nonatomic, setter=setDOMHandler:) id<RWIProtocolDOMDomainHandler> domHandler;
@property (readonly, nonatomic) RWIProtocolDOMDomainEventDispatcher *domEventDispatcher;
@property (retain, nonatomic, setter=setDOMStorageHandler:) id<RWIProtocolDOMStorageDomainHandler> domStorageHandler;
@property (readonly, nonatomic) RWIProtocolDOMStorageDomainEventDispatcher *domStorageEventDispatcher;
@property (retain, nonatomic, setter=setNetworkHandler:) id<RWIProtocolNetworkDomainHandler> networkHandler;
@property (readonly, nonatomic) RWIProtocolNetworkDomainEventDispatcher *networkEventDispatcher;
@property (retain, nonatomic, setter=setPageHandler:) id<RWIProtocolPageDomainHandler> pageHandler;
@property (readonly, nonatomic) RWIProtocolPageDomainEventDispatcher *pageEventDispatcher;

- (void)dealloc;
- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;

@end
