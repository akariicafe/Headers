@class NSDictionary;

@interface CATInitializingIDSServiceConnectionContentInvite : NSObject <CATInitializingIDSServiceConnectionMessageContent>

@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (id)initWithUserInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
