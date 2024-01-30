@class NSString, NSDateComponents, NSDate;

@interface NCDigestInfo : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSDateComponents *scheduleTime;
@property (readonly, copy, nonatomic) NSDate *scheduleDate;
@property (readonly, copy, nonatomic) NSString *titleString;
@property (readonly, copy, nonatomic) NSString *headerString;
@property (readonly, nonatomic) long long deliveryOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithDigestInfo:(id)a0;
- (id)_stringForDeliveryOrder:(long long)a0;

@end
