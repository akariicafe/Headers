@class NSUUID, NSError, NSDictionary;

@interface CATInitializingIDSServiceConnectionContentReject : NSObject <CATInitializingIDSServiceConnectionMessageContent>

@property (readonly, nonatomic) NSUUID *connectionIdentifier;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithConnectionIdentifier:(id)a0 error:(id)a1;

@end
