@class NSString;

@interface HSComponentCheckMesa : HSComponentCheckBase {
    NSString *currentNvSn;
    NSString *currentBBUniqueChipId;
    NSString *currentBBSerialNo;
}

+ (id)sharedSingleton;

- (id)init;
- (void).cxx_destruct;
- (id)querySN;
- (id)getMesaSensorSerialNumber:(id)a0;
- (id)getUniqueChipId:(id *)a0;
- (id)getUniqueDeviceId:(id *)a0;

@end
