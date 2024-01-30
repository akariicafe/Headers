@class NSString, MPModelSocialPerson;

@interface MPStoreSocialPendingFollowRequestOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>

@property (readonly, nonatomic) long long action;
@property (retain, nonatomic) MPModelSocialPerson *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)httpMethod;
- (id)httpBody;
- (id)queryItems;
- (id)bagKey;
- (id)_actionTypeString;
- (id)initWithAction:(long long)a0;
- (void).cxx_destruct;
- (id)fallbackBagKeys;
- (long long)httpBodyType;

@end
