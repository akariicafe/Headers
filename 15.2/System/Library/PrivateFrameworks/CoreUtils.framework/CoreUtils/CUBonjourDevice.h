@class NSString, NSDictionary, NSUUID, NSData;

@interface CUBonjourDevice : NSObject {
    unsigned char _deviceIDBytes[6];
}

@property (copy, nonatomic) NSDictionary *deviceInfo;
@property (copy, nonatomic) NSString *identifierStr;
@property (copy, nonatomic) NSUUID *identifierUUID;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *serviceType;
@property (readonly, copy, nonatomic) NSDictionary *txtDictionary;
@property (copy, nonatomic) NSData *txtData;

- (void)reconfirm;
- (unsigned int)updateWithBonjourDeviceInfo:(id)a0;
- (id)shortDescription;
- (void)_updateTXTDictionary:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyConnectionStringWithFlags:(unsigned long long)a0 error:(id *)a1;
- (id)copyConnectionInfoWithFlags:(unsigned long long)a0 interfaceName:(id)a1 error:(id *)a2;

@end
