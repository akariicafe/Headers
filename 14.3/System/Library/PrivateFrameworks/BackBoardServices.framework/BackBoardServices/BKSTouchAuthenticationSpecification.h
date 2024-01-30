@class NSSet, NSString;

@interface BKSTouchAuthenticationSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *displays;
@property (readonly, nonatomic) unsigned int slotID;
@property (readonly, nonatomic) unsigned long long authenticationMessageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)buildSpecification:(id /* block */)a0;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
