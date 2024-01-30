@class NSString, SXJSONDictionary;

@interface SXEmailAction : NSObject <SXAction>

@property (readonly, nonatomic) NSString *recipient;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRecipient:(id)a0 subject:(id)a1;

@end
