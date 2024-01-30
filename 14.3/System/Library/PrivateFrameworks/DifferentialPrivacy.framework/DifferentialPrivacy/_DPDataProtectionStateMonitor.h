@class NSUUID, _DPDataProtectionMaster;

@interface _DPDataProtectionStateMonitor : NSObject

@property (readonly, nonatomic) _DPDataProtectionMaster *master;
@property (readonly) NSUUID *handlerUUID;
@property (copy) id /* block */ changeHandler;

+ (id)dataProtectionClassA;
+ (id)dataProtectionClassC;
+ (id)dataProtectionClassD;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isDataAvailableFor:(id)a0;

@end
