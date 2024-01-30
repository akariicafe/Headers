@class NSError, NSString, NSObject;
@protocol OS_dispatch_group;

@interface WFPocketAddAction : WFAction <PocketAPIDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_group> *addGroup;
@property (retain, nonatomic) NSError *lastError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
