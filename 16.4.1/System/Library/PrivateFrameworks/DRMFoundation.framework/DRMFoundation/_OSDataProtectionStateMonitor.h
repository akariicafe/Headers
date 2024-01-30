@class NSUUID, _OSDataProtectionManager;

@interface _OSDataProtectionStateMonitor : NSObject

@property (readonly, nonatomic) _OSDataProtectionManager *manager;
@property (readonly, nonatomic) NSUUID *handlerUUID;
@property (copy, nonatomic) id /* block */ changeHandler;

+ (id)dataProtectionClassC;
+ (id)dataProtectionClassD;
+ (id)dataProtectionClassA;

- (BOOL)isDataAvailableFor:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)unnotifiedIsDataAvailableForClassC;

@end
