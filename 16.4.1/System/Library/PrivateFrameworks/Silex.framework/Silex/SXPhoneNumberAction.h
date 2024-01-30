@class NSString, SXJSONDictionary;

@interface SXPhoneNumberAction : NSObject <SXAction>

@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0;

@end
