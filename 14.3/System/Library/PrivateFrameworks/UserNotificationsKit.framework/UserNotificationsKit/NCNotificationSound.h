@class NSString, NSDictionary, TLAlertConfiguration;

@interface NCNotificationSound : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) long long soundType;
@property (readonly, nonatomic) unsigned int systemSoundID;
@property (readonly, nonatomic) unsigned long long soundBehavior;
@property (readonly, copy, nonatomic) NSString *ringtoneName;
@property (readonly, copy, nonatomic) NSDictionary *vibrationPattern;
@property (readonly, nonatomic, getter=isRepeating) BOOL repeats;
@property (readonly, nonatomic) double maxDuration;
@property (readonly, copy, nonatomic) NSDictionary *controllerAttributes;
@property (readonly, copy, nonatomic) NSString *songPath;
@property (readonly, copy, nonatomic) TLAlertConfiguration *alertConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithNotificationSound:(id)a0;

@end
