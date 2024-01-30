@class NSString, AFDeviceContextHistoryConfiguration;

@interface _AFDeviceContextHistoryConfigurationMutation : NSObject <AFDeviceContextHistoryConfigurationMutating> {
    AFDeviceContextHistoryConfiguration *_baseModel;
    BOOL _keepsHistory;
    unsigned long long _historyBufferSize;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasKeepsHistory : 1; unsigned char hasHistoryBufferSize : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void).cxx_destruct;
- (id)init;
- (void)setKeepsHistory:(BOOL)a0;
- (void)setHistoryBufferSize:(unsigned long long)a0;

@end
