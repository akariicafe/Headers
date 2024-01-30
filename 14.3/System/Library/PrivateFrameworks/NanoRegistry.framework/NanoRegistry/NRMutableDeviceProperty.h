@class NRPBMutableDeviceProperty;
@protocol NSObject, NSCopying;

@interface NRMutableDeviceProperty : NRMutableStateBase

@property (readonly, retain, nonatomic) id<NSObject, NSCopying> value;
@property (retain, nonatomic) NRPBMutableDeviceProperty *protobuf;

+ (id)enclosedClassTypes;
+ (BOOL)supportsSecureCoding;
+ (id)diffFrom:(id)a0 to:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)applyDiff:(id)a0 upOnly:(BOOL)a1 notifyParent:(BOOL)a2 unconditional:(BOOL)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)setValue:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
