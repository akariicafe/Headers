@class NRPBDevicePropertyDiff;
@protocol NSObject, NSCopying;

@interface NRDevicePropertyDiff : NRDiffBase

@property (readonly, nonatomic) id<NSObject, NSCopying> value;
@property (readonly, nonatomic) NRPBDevicePropertyDiff *protobuf;

+ (id)enclosedClassTypes;
+ (BOOL)supportsSecureCoding;
+ (id)unpackPropertyValue:(id)a0;
+ (id)packPropertyValue:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
