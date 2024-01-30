@class NSString;

@interface VUIDebugViewDefaults : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *defaultName;
@property (nonatomic) BOOL defaultBoolValue;
@property (nonatomic) BOOL integerValueType;
@property (nonatomic) unsigned long long defaultIntegerValue;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 domain:(id)a2 defaultName:(id)a3 boolType:(BOOL)a4;
- (void)toggleDefaultBoolValue;

@end
