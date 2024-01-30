@class NSString, NSNumber, NSObject;

@interface SBSDefaultInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long defaultType;
@property (readonly) NSString *stringForUserDefault;
@property (readonly) NSString *userDescription;
@property (readonly) NSObject *defaultValue;
@property (readonly) BOOL isBool;
@property (readonly) BOOL isDouble;
@property (readonly) NSNumber *rangeMin;
@property (readonly) NSNumber *rangeMax;
@property (readonly) BOOL requiresReinit;
@property (readonly) NSString *valueType;

+ (id)defaultsName:(id)a0 asBool:(id)a1 userInfo:(id)a2 requiresReinit:(BOOL)a3;
+ (id)defaultsName:(id)a0 asInt:(id)a1 rangeMin:(id)a2 rangeMax:(id)a3 userInfo:(id)a4 requiresReinit:(BOOL)a5;
+ (id)defaultsName:(id)a0 asDouble:(id)a1 rangeMin:(id)a2 rangeMax:(id)a3 userInfo:(id)a4 requiresReinit:(BOOL)a5;
+ (id)defaultsName:(id)a0 asString:(id)a1 userInfo:(id)a2 requiresReinit:(BOOL)a3;
+ (id)defaultsName:(id)a0 asBool:(id)a1;
+ (id)defaultsName:(id)a0 asInt:(id)a1;
+ (id)defaultsName:(id)a0 asInt:(id)a1 rangeMin:(id)a2 rangeMax:(id)a3;
+ (id)defaultsName:(id)a0 asInt:(id)a1 userInfo:(id)a2 requiresReinit:(BOOL)a3;
+ (id)defaultsName:(id)a0 asDouble:(id)a1;
+ (id)defaultsName:(id)a0 asDouble:(id)a1 rangeMin:(id)a2 rangeMax:(id)a3;
+ (id)defaultsName:(id)a0 asDouble:(id)a1 userInfo:(id)a2 requiresReinit:(BOOL)a3;
+ (id)defaultsName:(id)a0 asString:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)getHumanReadable:(id)a0 isDefaultSet:(BOOL)a1;

@end
