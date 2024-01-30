@class NSString, ICASEndMode, ICASPwdModeChangeContextPath, ICASStartMode;

@interface ICASPasswordModeData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASPwdModeChangeContextPath *pwdModeChangeContextPath;
@property (readonly, nonatomic) ICASStartMode *startMode;
@property (readonly, nonatomic) ICASEndMode *endMode;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithPwdModeChangeContextPath:(id)a0 startMode:(id)a1 endMode:(id)a2;

@end
