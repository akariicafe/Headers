@interface CKDDaemonProcess : NSObject

@property (readonly, nonatomic) long long processType;
@property (readonly, nonatomic) BOOL isSystemInstalledBinary;

+ (void)deriveCurrentProcessWithArgC:(int)a0 argv:(const char **)a1;
+ (id)currentProcess;

- (id)_initWithProcessType:(long long)a0;
- (id)_initWithArgC:(int)a0 argv:(const char **)a1;

@end
