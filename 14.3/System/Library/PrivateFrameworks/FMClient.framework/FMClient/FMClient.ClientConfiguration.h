@class NSString, NSDateComponents;

@interface FMClient.ClientConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ deviceNameSyncInterval;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ nearbyScanDuration;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ nearbyScanEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ nearbyScanWhileAuthenticated;
@property (nonatomic, readonly) NSDateComponents *deviceNameSyncInterval;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ deviceNameSyncEnabled;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithNearbyScanDuration:(double)a0 nearbyScanEnabled:(BOOL)a1 nearbyScanWhileAuthenticated:(BOOL)a2 deviceNameSyncInterval:(id)a3 deviceNameSyncEnabled:(BOOL)a4;

@end
