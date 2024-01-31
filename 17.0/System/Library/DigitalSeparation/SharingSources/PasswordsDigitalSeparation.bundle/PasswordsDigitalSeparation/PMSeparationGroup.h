@class KCSharingGroup, NSString, NSArray;

@interface PMSeparationGroup : NSObject <DSSharedResource>

@property (readonly, nonatomic) KCSharingGroup *group;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *displayDetail;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) long long visibility;
@property (readonly, nonatomic) unsigned long long participationAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 participants:(id)a1;

@end
