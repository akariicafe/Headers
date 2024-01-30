@class NSSet, NAIdentity, NSString;
@protocol HFIconDescriptor;

@interface HFUserNotificationServiceTopic : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, copy, nonatomic) NSSet *serviceTypes;
@property (readonly, copy, nonatomic) NSSet *accessoryCategoryTypes;
@property (readonly, copy, nonatomic) NSString *topicName;
@property (readonly, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_announceTopic;
+ (id)_cameraTopic;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithServiceTypes:(id)a0 accessoryCategoryTypes:(id)a1 topicName:(id)a2 iconDescriptor:(id)a3;
- (id)initWithServiceType:(id)a0 topicName:(id)a1;

@end
