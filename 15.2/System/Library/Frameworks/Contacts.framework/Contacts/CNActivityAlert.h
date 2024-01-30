@class NSString, NSDictionary;

@interface CNActivityAlert : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sound;
@property (copy, nonatomic) NSString *vibration;
@property (nonatomic) BOOL ignoreMute;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSound:(id)a0 vibration:(id)a1 ignoreMute:(BOOL)a2 userInfo:(id)a3;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSound:(id)a0 vibration:(id)a1 ignoreMute:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
