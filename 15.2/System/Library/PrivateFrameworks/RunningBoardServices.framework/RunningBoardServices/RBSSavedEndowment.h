@class NSString, NSObject;
@protocol NSSecureCoding;

@interface RBSSavedEndowment : NSObject <NSCopying, RBSXPCSecureCoding>

@property (readonly, nonatomic) NSObject<NSSecureCoding> *endowment;
@property (readonly, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)savedEndowment:(id)a0 withKey:(id)a1;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithEndowment:(id)a0 andKey:(id)a1;

@end
