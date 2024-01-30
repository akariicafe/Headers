@class NSString, AFDeviceRequestHandlingRecord;

@interface _AFDeviceRequestHandlingRecordMutation : NSObject <AFDeviceRequestHandlingRecordMutating> {
    AFDeviceRequestHandlingRecord *_baseModel;
    NSString *_requestID;
    unsigned long long _deviceRoles;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasRequestID : 1; unsigned char hasDeviceRoles : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void).cxx_destruct;
- (id)init;
- (void)setRequestID:(id)a0;
- (void)setDeviceRoles:(unsigned long long)a0;

@end
