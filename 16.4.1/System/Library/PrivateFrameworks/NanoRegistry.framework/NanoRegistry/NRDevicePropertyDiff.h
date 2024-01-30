@class NRPBDevicePropertyDiff;
@protocol NSObject, NSCopying;

@interface NRDevicePropertyDiff : NRDiffBase

@property (readonly, nonatomic) id<NSObject, NSCopying> value;
@property (readonly, nonatomic) NRPBDevicePropertyDiff *protobuf;

+ (BOOL)supportsSecureCoding;
+ (id)enclosedClassTypes;
+ (id)packPropertyValue:(id)a0;
+ (id)unpackPropertyValue:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
