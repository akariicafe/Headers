@class NSString;

@interface CLGyroCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>

@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;
+ (id)getSilo;
+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;
+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;

- (double)syncgetLastMiniCalibration;
- (void)beginService;
- (id)init;
- (BOOL)syncgetSupportsMiniCalibration;
- (BOOL)syncgetDoSync:(id /* block */)a0;
- (struct CLGyroCalibrationDatabase { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; id x2; id x3; id x4; struct map<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification> > > { struct __tree<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::Notification>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x5; struct map<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications> > > { struct __tree<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, CLNotifier<CLGyroCalibrationDatabase_Type::Notification, CLGyroCalibrationDatabase_Type::NotificationData, char, char>::ClientNotifications>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x6; int x7; BOOL x8; } *)adaptee;
- (int)syncgetNonFactoryRoundCount;
- (void)doAsync:(id /* block */)a0;
- (void)dumpDatabase:(id)a0 onCompletion:(id /* block */)a1;
- (int)syncgetNumTemperatures;
- (void)endService;
- (int)syncgetMaxDynamicTemperature;
- (BOOL)syncgetInsertWithBias:(const struct { float x0; float x1; float x2; } *)a0 variance:(const struct { float x0; float x1; float x2; } *)a1 temperature:(float)a2 timestamp:(double)a3;
- (void)doAsync:(id /* block */)a0 withReply:(id /* block */)a1;
- (BOOL)syncgetBiasFit:(struct { int x0; double x1; double x2; union { struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; } x0; struct { BOOL x0; char x1[282]; } x1; } x3; } *)a0;
- (BOOL)syncgetWipeDatabase;
- (BOOL)syncgetGyroStatsWithBias:(struct { float x0; float x1; float x2; } *)a0 slope:(struct { float x0; float x1; float x2; } *)a1 l2Error:(struct { float x0; float x1; float x2; } *)a2 isDynamic:(BOOL)a3 deltaBias:(struct { float x0; float x1; float x2; } *)a4 deltaSlope:(struct { float x0; float x1; float x2; } *)a5 deltaError:(struct { float x0; float x1; float x2; } *)a6 isDeltaDynamic:(BOOL)a7;
- (void)startFactoryGYTT;

@end
