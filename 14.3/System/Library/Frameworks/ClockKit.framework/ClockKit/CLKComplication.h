@class NSString, NSDictionary, NSUserActivity, CLKUserActivity;

@interface CLKComplication : NSObject <NSSecureCoding, TLIdentifiable, NSCopying> {
    CLKUserActivity *_clkUserActivity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)complicationWithFamily:(long long)a0 descriptor:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)tl_isEqualToIdentifiable:(id)a0;

@end
