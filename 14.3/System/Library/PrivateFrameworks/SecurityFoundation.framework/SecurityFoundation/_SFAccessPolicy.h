@class NSArray, NSString;

@interface _SFAccessPolicy : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const struct __CFDictionary { } *secAccessibilityAttributes;
@property (copy, nonatomic) NSArray *accessControlList;
@property (nonatomic) struct { long long mode; struct { unsigned long long authenticationRequirements; long long subsetCount; } authenticationPolicy; } accessibility;
@property (nonatomic) long long sharingPolicy;
@property (copy, nonatomic) NSString *accessGroup;

+ (id)accessPolicyWithSecAccessibility:(struct __CFString { } *)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAccessibility:(struct { long long x0; struct { unsigned long long x0; long long x1; } x1; })a0 sharingPolicy:(long long)a1;

@end
