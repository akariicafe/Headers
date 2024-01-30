@class NSString, MPModelSocialPerson;

@interface MPStoreSocialPendingFollowRequestOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>

@property (readonly, nonatomic) long long action;
@property (retain, nonatomic) MPModelSocialPerson *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bagKey;
- (id)queryItems;
- (id)initWithAction:(long long)a0;
- (id)_actionTypeString;
- (void).cxx_destruct;
- (id)httpBody;
- (long long)httpMethod;
- (id)fallbackBagKeys;
- (long long)httpBodyType;

@end
