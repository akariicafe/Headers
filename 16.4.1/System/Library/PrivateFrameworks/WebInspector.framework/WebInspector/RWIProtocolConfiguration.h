@class RWIProtocolNetworkDomainEventDispatcher, RWIProtocolPageDomainEventDispatcher, RWIProtocolConsoleDomainEventDispatcher, RWIProtocolDOMDomainEventDispatcher, RWIProtocolCSSDomainEventDispatcher, RWIProtocolDOMStorageDomainEventDispatcher;
@protocol RWIProtocolDOMDomainHandler, RWIProtocolCSSDomainHandler, RWIProtocolDOMStorageDomainHandler, RWIProtocolNetworkDomainHandler, RWIProtocolPageDomainHandler;

@interface RWIProtocolConfiguration : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_controller;
    struct RetainPtr<id<RWIProtocolCSSDomainHandler>> { void *m_ptr; } _cssHandler;
    struct RetainPtr<RWIProtocolCSSDomainEventDispatcher> { void *m_ptr; } _cssEventDispatcher;
    struct RetainPtr<RWIProtocolConsoleDomainEventDispatcher> { void *m_ptr; } _consoleEventDispatcher;
    struct RetainPtr<id<RWIProtocolDOMDomainHandler>> { void *m_ptr; } _domHandler;
    struct RetainPtr<RWIProtocolDOMDomainEventDispatcher> { void *m_ptr; } _domEventDispatcher;
    struct RetainPtr<id<RWIProtocolDOMStorageDomainHandler>> { void *m_ptr; } _domStorageHandler;
    struct RetainPtr<RWIProtocolDOMStorageDomainEventDispatcher> { void *m_ptr; } _domStorageEventDispatcher;
    struct RetainPtr<id<RWIProtocolNetworkDomainHandler>> { void *m_ptr; } _networkHandler;
    struct RetainPtr<RWIProtocolNetworkDomainEventDispatcher> { void *m_ptr; } _networkEventDispatcher;
    struct RetainPtr<id<RWIProtocolPageDomainHandler>> { void *m_ptr; } _pageHandler;
    struct RetainPtr<RWIProtocolPageDomainEventDispatcher> { void *m_ptr; } _pageEventDispatcher;
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

- (id).cxx_construct;
- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (void).cxx_destruct;

@end
