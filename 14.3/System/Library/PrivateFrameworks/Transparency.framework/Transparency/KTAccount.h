@class NSData, NSMutableArray;

@interface KTAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *accountID;
@property (retain) NSMutableArray *devices;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMutation:(id)a0;
- (id)deviceForDeviceIdVRFOutput:(id)a0;
- (void)addDevicesObject:(id)a0;
- (BOOL)updateWithMutation:(id)a0 error:(id *)a1;
- (void)removeDevicesObject:(id)a0;
- (id)initWithAccountId:(id)a0;

@end
