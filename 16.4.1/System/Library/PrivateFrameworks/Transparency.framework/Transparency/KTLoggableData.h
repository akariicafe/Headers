@class NSString, NSData, NSError, NSNumber;

@interface KTLoggableData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *deviceIdHash;
@property (retain) NSData *clientDataHash;
@property (retain) NSData *clientData;
@property BOOL notInSyncedData;
@property unsigned long long result;
@property (retain) NSError *failure;
@property (copy) NSData *deviceID;
@property (copy) NSData *signature;
@property BOOL successfulSync;
@property BOOL marked;
@property BOOL ktCapable;
@property (copy) NSString *build;
@property (copy) NSString *product;
@property (copy) NSNumber *version;

+ (BOOL)isAccountKTCapable:(id)a0;
+ (void)loggableDataForDeviceID:(id)a0 completionBlock:(id /* block */)a1;
+ (void)loggableDataForDeviceID:(id)a0 application:(id)a1 completionBlock:(id /* block */)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)diagnosticsJsonDictionary;
- (id)initWithClientData:(id)a0;

@end
