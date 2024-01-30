@class NSString, NSMapTable;
@protocol PCInterfaceUsabilityMonitorProtocol;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol> {
    id<PCInterfaceUsabilityMonitorProtocol> _internal;
    NSMapTable *_delegateMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long interfaceIdentifier;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, nonatomic) BOOL isInterfaceUsable;
@property (readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) BOOL isInternetReachable;
@property (readonly, retain, nonatomic) NSString *linkQualityString;
@property (readonly, nonatomic) BOOL isPoorLinkQuality;
@property (readonly, nonatomic) BOOL isBadLinkQuality;
@property (readonly, nonatomic) BOOL isRadioHot;
@property (readonly, nonatomic) BOOL isNetworkingPowerExpensiveToUse;
@property (readonly, nonatomic) int currentRAT;
@property (readonly, nonatomic) BOOL isLTEWithCDRX;
@property (readonly, nonatomic) unsigned long long interface5GMode;
@property (readonly, nonatomic) struct __CFString { } *wwanInterfaceName;
@property (readonly, nonatomic) NSString *networkCode;

+ (BOOL)isPoorLinkQuality:(int)a0;
+ (id)sharedInstanceForIdentifier:(long long)a0;
+ (id)stringForLinkQuality:(int)a0;
+ (BOOL)isNetworkingPowerExpensiveToUse;
+ (BOOL)isBadLinkQuality:(int)a0;

- (void)interfaceLinkQualityChanged:(id)a0 previousLinkQuality:(int)a1;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)interfaceReachabilityChanged:(id)a0;
- (id)initWithInterfaceIdentifier:(long long)a0;
- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (void)interfaceRadioHotnessChanged:(id)a0;
- (void).cxx_destruct;

@end
