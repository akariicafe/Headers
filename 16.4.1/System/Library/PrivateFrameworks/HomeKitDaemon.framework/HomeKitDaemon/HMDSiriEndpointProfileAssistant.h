@class NSString, NSArray, NSNumber, HMDService;

@interface HMDSiriEndpointProfileAssistant : HMFObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *identifier;
@property (copy) NSString *name;
@property (copy) NSNumber *active;
@property (readonly) HMDService *service;
@property (readonly) NSArray *characteristicsToMonitor;
@property (readonly) NSArray *allCharacteristics;

+ (id)shortDescription;
+ (id)logCategory;

- (id)initWithService:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_activeCharacteristic;
- (id)_identifierCharacteristic;
- (id)_nameCharacteristic;
- (BOOL)containsCharacteristic:(id)a0;
- (BOOL)updateCharacteristic:(id)a0 value:(id)a1;

@end
