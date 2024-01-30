@class NSString;

@interface CLGeomagneticModelProviderAdapter : CLNotifierServiceAdapter <CLGeomagneticModelProviderProtocol>

@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;
+ (id)getSilo;
+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;
+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;

- (void)beginService;
- (id)init;
- (BOOL)syncgetDoSync:(id /* block */)a0;
- (struct CLGeomagneticModelProvider { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; id x2; id x3; id x4; struct map<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification> > > { struct __tree<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x5; struct map<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications> > > { struct __tree<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGeomagneticModelProvider_Type::Notification, CLGeomagneticModelProvider_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x6; int x7; BOOL x8; } *)adaptee;
- (void)doAsync:(id /* block */)a0;
- (void)endService;
- (void)fetchGeomagneticModelData:(id /* block */)a0;
- (void)doAsync:(id /* block */)a0 withReply:(id /* block */)a1;

@end
