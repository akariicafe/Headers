@class NSString, NSData;

@interface SBKGenericKeyValuePair : NSObject <SBKKeyValuePayloadPair>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *kvsKey;
@property (readonly, nonatomic) NSData *kvsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pairWithKVSKey:(id)a0 kvsPayload:(id)a1;

- (double)timestamp;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKVSKey:(id)a0 kvsPayload:(id)a1;
- (id)kvsValueDescription;

@end
