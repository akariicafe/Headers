@class NSString, MPModelSocialPerson;

@interface MPStoreSocialUnfollowOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource>

@property (retain, nonatomic) MPModelSocialPerson *person;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)httpMethod;
- (id)httpBody;
- (id)queryItems;
- (id)bagKey;
- (void).cxx_destruct;
- (long long)httpBodyType;

@end
