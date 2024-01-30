@class NSString;

@interface CLCompassDatabaseAdapter : CLNotifierServiceAdapter <CLCompassDatabaseProtocol>

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
- (struct CLCompassDatabase { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; id x2; id x3; id x4; struct map<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification> > > { struct __tree<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x5; struct map<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications> > > { struct __tree<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLCompassDatabase_Type::Notification, CLCompassDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x6; int x7; BOOL x8; struct BasicMutex { void /* function */ **x0; struct MutexInfo *x1; } x9; int x10; } *)adaptee;
- (int)syncgetPendingSetBiasCount;
- (void)getBiasWithMagneticField:(struct { float x0; float x1; float x2; })a0 acceleration:(struct { float x0; float x1; float x2; })a1;
- (void)doAsync:(id /* block */)a0;
- (void)dumpDatabase:(id)a0 onCompletion:(id /* block */)a1;
- (void)endService;
- (BOOL)syncgetLookupBiasWithMagneticField:(struct { float x0; float x1; float x2; })a0 acceleration:(struct { float x0; float x1; float x2; })a1 bias:(struct { float x0; float x1; float x2; } *)a2 level:(int *)a3 noResults:(BOOL *)a4;
- (void)doAsync:(id /* block */)a0 withReply:(id /* block */)a1;
- (void)setBias:(struct { float x0; float x1; float x2; })a0 withMagneticField:(struct { float x0; float x1; float x2; })a1 level:(int)a2 magnitude:(float)a3 inclination:(float)a4;

@end
