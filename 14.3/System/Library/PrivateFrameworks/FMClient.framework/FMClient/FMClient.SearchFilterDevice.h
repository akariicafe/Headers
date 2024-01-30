@class NSString;

@interface FMClient.SearchFilterDevice : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ ownerName;
    void /* unknown type, empty encoding */ ownerDsid;
    void /* unknown type, empty encoding */ deviceName;
    void /* unknown type, empty encoding */ deviceClass;
    void /* unknown type, empty encoding */ productName;
    void /* unknown type, empty encoding */ productType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSString *ownerDsid;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOwnerName:(id)a0 ownerDsid:(id)a1 deviceName:(id)a2 deviceClass:(id)a3 productName:(id)a4 productType:(id)a5;

@end
