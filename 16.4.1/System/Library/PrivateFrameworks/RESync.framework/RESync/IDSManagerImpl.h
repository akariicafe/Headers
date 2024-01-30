@class IDSService, NSString, NSObject;
@protocol OS_dispatch_object;

@interface IDSManagerImpl : NSObject <IDSServiceDelegatePrivate> {
    struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>> { struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; struct Subscription *m_data; } m_subscriptions; struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::Subscription, true>> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; void *m_data; } m_deferred; struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; struct SubscriptionLegacy *m_data; } m_subscriptionsLegacy; struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>>::SubscriptionLegacy, true>> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; void *m_data; } m_deferredLegacy; int m_raiseLevel; } m_receivedInvite;
    struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> { struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; struct Subscription *m_data; } m_subscriptions; struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription, true>> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; void *m_data; } m_deferred; struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; struct SubscriptionLegacy *m_data; } m_subscriptionsLegacy; struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy, true>> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; void *m_data; } m_deferredLegacy; int m_raiseLevel; } m_acceptedInvite;
    struct Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>> { struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; struct Subscription *m_data; } m_subscriptions; struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::Subscription, true>> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; void *m_data; } m_deferred; struct DynamicArray<re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; struct SubscriptionLegacy *m_data; } m_subscriptionsLegacy; struct DynamicArray<re::Pair<bool, re::Event<re::IDSSessionService, re::SharedPtr<re::DiscoveryInvite>, re::SharedPtr<re::DiscoveryIdentity>>::SubscriptionLegacy, true>> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; void *m_data; } m_deferredLegacy; int m_raiseLevel; } m_rejectedInvite;
    struct DynamicArray<re::IDSInvite *> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; struct IDSInvite **m_data; } m_invites;
    struct DynamicArray<re::IDSDiscoveryView *> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned int m_version; struct IDSDiscoveryView **m_data; } m_views;
}

@property (nonatomic) struct Config { struct IDSSessionService *idsSessionService; struct queue { struct object { NSObject<OS_dispatch_object> *fObj; } fObj; } dispatchQueue; struct DynamicString { struct Allocator *m_allocator; char *m_buffer; unsigned long long m_capacity; unsigned long long m_length; } serviceID; } config;
@property (retain, nonatomic) IDSService *service;
@property (nonatomic) BOOL isListeningForInvites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithConfig:(struct Config { struct IDSSessionService *x0; struct queue { struct object { id x0; } x0; } x1; struct DynamicString { struct Allocator *x0; char *x1; unsigned long long x2; unsigned long long x3; } x2; })a0;
- (void).cxx_destruct;
- (void)acceptInvite:(void *)a0;
- (BOOL)isLoggedIn;
- (void)stopListeningForInvites;
- (void)setupService;
- (void *)inviteWithGuid:(id)a0;
- (void)sendMessage:(id)a0 type:(id)a1 objectGUID:(id)a2 to:(id)a3;
- (void)sendInviteRequest:(void *)a0 destinations:(id)a1;
- (void *)acceptedInviteEvent;
- (void)broadcastViewUpdate:(void *)a0;
- (struct SharedPtr<re::IDSDiscoveryView> { struct IDSDiscoveryView *x0; })createDiscoveryViewWithDestinations:(id)a0 destinations:(id)a1;
- (struct SharedPtr<re::DiscoveryInvite> { struct DiscoveryInvite *x0; })createInviteWithDestinations:(struct Slice<re::DynamicString> { struct DynamicString *x0; unsigned long long x1; })a0;
- (struct SharedPtr<re::DiscoveryInvite> { struct DiscoveryInvite *x0; })createInviteWithDiscoveryView:(struct SharedPtr<re::DiscoveryView> { struct DiscoveryView *x0; })a0 destinations:(struct Slice<re::DynamicString> { struct DynamicString *x0; unsigned long long x1; })a1;
- (struct SharedPtr<re::IDSDiscoveryIdentity> { struct IDSDiscoveryIdentity *x0; })createLocalIdentity;
- (id)discoveryViewToNSArray:(void *)a0 to:(id)a1;
- (void *)discoveryViewWithGuid:(id)a0;
- (struct IDSSessionService { void /* function */ **x0; } *)idsSessionService;
- (void)incomingInviteMessage:(void *)a0 type:(id)a1 message:(id)a2 from:(id)a3;
- (void)incomingInviteRequest:(id)a0 payload:(id)a1 from:(id)a2;
- (void)incomingViewMessage:(void *)a0 type:(id)a1 message:(id)a2 from:(id)a3;
- (void)inviteAcceptedFrom:(void *)a0 from:(id)a1;
- (BOOL)isValidDestinationsArray:(id)a0;
- (BOOL)isValidInviteResponse:(id)a0 message:(id)a1;
- (BOOL)isValidViewUpdate:(id)a0 message:(id)a1;
- (BOOL)parseMessage:(id)a0 payload:(id *)a1 objectGUID:(id *)a2 type:(id *)a3;
- (void *)receivedInviteEvent;
- (void *)rejectedInviteEvent;
- (void)startListeningForInvites;
- (void)willDestroyDiscoveryView:(void *)a0;
- (void)willDestroyInvite:(void *)a0;

@end
