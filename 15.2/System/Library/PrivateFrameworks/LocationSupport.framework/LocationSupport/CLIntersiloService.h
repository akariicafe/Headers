@class NSString, CLServiceVendor, CLSilo;
@protocol CLIntersiloUniverse;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol, CLIntersiloUniverse>

@property (readonly, nonatomic) id<CLIntersiloUniverse> universe;
@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CLSilo *silo;
@property (readonly, nonatomic) CLServiceVendor *vendor;

+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;
+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;
+ (BOOL)isSupported;
+ (id)getSilo;

- (void)setVendor:(id)a0;
- (id)initWithInboundProtocol:(id)a0 outboundProtocol:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setSilo:(id)a0;

@end
