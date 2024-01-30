@class NSString, MPModelSocialPerson;

@interface MPStoreSocialUnfollowOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>

@property (retain, nonatomic) MPModelSocialPerson *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bagKey;
- (id)queryItems;
- (void).cxx_destruct;
- (id)httpBody;
- (long long)httpMethod;
- (long long)httpBodyType;

@end
