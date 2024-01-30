@class NSString, NSDictionary;

@interface IKPlayerTimedMetadataEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSDictionary *value;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
