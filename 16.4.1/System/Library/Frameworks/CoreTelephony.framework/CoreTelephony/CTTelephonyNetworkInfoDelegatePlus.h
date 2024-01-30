@class CTTelephonyNetworkInfo, NSString;

@interface CTTelephonyNetworkInfoDelegatePlus : NSObject <CoreTelephonyClientDataDelegateInternal>

@property (weak, nonatomic) CTTelephonyNetworkInfo *delegate;
@property (nonatomic) struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } clientQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
