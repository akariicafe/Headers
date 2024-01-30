@class NSString, NSArray;

@interface FMClient.SearchResultDevice : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ firstName;
    void /* unknown type, empty encoding */ lastName;
    void /* unknown type, empty encoding */ ownerDsid;
    void /* unknown type, empty encoding */ serverId;
    void /* unknown type, empty encoding */ deviceName;
    void /* unknown type, empty encoding */ deviceClass;
    void /* unknown type, empty encoding */ productName;
    void /* unknown type, empty encoding */ discoveryId;
    void /* unknown type, empty encoding */ productType;
    void /* unknown type, empty encoding */ pairedDevices;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *ownerDsid;
@property (nonatomic, readonly) NSString *serverId;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *discoveryId;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ thisDevice;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ needsSafety;
@property (nonatomic, readonly) NSArray *pairedDevices;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFirstName:(id)a0 lastName:(id)a1 ownerDsid:(id)a2 serverId:(id)a3 deviceName:(id)a4 deviceClass:(id)a5 productName:(id)a6 discoveryId:(id)a7 productType:(id)a8 thisDevice:(BOOL)a9 needsSafety:(BOOL)a10 pairedDevices:(id)a11;

@end
