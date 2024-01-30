@class CLServiceVendor, NSString, CLSilo;

@interface CLIntersiloUniverse : NSObject <CLIntersiloUniverse>

@property (readonly, nonatomic) CLSilo *silo;
@property (readonly, nonatomic) CLServiceVendor *vendor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newSharedVendorUniverseWithSilo:(id)a0;
+ (id)newIsolatedUniverseWithOnlySilo:(id)a0;

- (void).cxx_destruct;
- (id)initWithSilo:(id)a0 vendor:(id)a1;

@end
