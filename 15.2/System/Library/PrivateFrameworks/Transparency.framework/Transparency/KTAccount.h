@class NSData, NSMutableArray;

@interface KTAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *accountKey;
@property (retain) NSData *accountKeyHash;
@property (retain) NSMutableArray *devices;
@property (readonly) NSData *accountID;

- (void)updateWithMutation:(id)a0 error:(id *)a1;
- (void)removeDevicesObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMutation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)deviceForDeviceIdHash:(id)a0;
- (id)debugDescription;
- (void)addDevicesObject:(id)a0;
- (id)initWithAccountKeyHash:(id)a0;

@end
