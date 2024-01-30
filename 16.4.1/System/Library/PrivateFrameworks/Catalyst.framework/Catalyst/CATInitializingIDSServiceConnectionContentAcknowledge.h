@class NSUUID, NSDictionary;

@interface CATInitializingIDSServiceConnectionContentAcknowledge : NSObject <CATInitializingIDSServiceConnectionMessageContent>

@property (readonly, nonatomic) NSUUID *connectionIdentifier;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithConnectionIdentifier:(id)a0;

@end
