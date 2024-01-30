@class NSData;

@interface HDCloudSyncSerializedRecord : NSObject

@property (readonly, copy, nonatomic) NSData *systemData;
@property (readonly, copy, nonatomic) NSData *unprotectedDBData;
@property (readonly, copy, nonatomic) NSData *protectedDBData;

- (void).cxx_destruct;
- (id)initWithEncodedSystemData:(id)a0 unprotectedDBData:(id)a1 protectedDBData:(id)a2;

@end
