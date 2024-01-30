@class NSSet, NSUUID;

@interface ATXSlotSet : NSObject <NSCopying, NSSecureCoding> {
    unsigned int _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *parameters;
@property (retain, nonatomic) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (id)initWithOpaqueParameters;
- (id)initWithParameters:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParameters:(id)a0 uuid:(id)a1;
- (BOOL)isEqualToSlotSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithOpaqueParametersUuid:(id)a0;
- (void).cxx_destruct;

@end
