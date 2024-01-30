@class NSString, HMHomeManager;

@interface DEDHomeKitManager : NSObject

@property (retain) HMHomeManager *homeKitManager;
@property (readonly) NSString *homeKitIdentifier;
@property (readonly) NSString *homeTheaterSystemName;
@property (readonly) NSString *homeTheaterSystemIdentifier;

+ (id)sharedInstance;

- (BOOL)isHomeKitResident;
- (void)start;
- (void).cxx_destruct;
- (id)stringForAirPlayPreference:(id)a0;

@end
