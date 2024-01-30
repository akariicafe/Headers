@class NSData;

@interface HDCloudSyncSerializedRecord : NSObject

@property (readonly, copy, nonatomic) NSData *systemData;
@property (readonly, copy, nonatomic) NSData *unprotectedDBData;
@property (readonly, copy, nonatomic) NSData *protectedDBData;

- (id)initWithEncodedSystemData:(id)a0 unprotectedDBData:(id)a1 protectedDBData:(id)a2;
- (void).cxx_destruct;

@end
