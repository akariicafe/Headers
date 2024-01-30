@class NSString, NSMutableDictionary;

@interface NPKIDVRemoteDeviceServiceContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_eventsToServiceNames;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *remoteDeviceID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)_registeredEventsForServiceName:(id)a0;
- (id)_serviceNamesForEventString:(id)a0;
- (void)_setServiceNames:(id)a0 forEventString:(id)a1;
- (unsigned long long)registerEvents:(unsigned long long)a0 forServiceName:(id)a1;
- (id)serviceNamesForEvent:(unsigned long long)a0;
- (unsigned long long)unregisterEvents:(unsigned long long)a0 forServiceName:(id)a1;

@end
