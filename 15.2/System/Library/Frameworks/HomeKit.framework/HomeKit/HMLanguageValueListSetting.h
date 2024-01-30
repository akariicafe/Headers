@class NSArray;

@interface HMLanguageValueListSetting : HMImmutableSetting

@property (readonly, copy) NSArray *languageValues;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)payloadCopy;
- (id)protoPayload;
- (id)initWithProtoPayload:(id)a0;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 payload:(id)a2;
- (id)initWithKeyPath:(id)a0 readOnly:(BOOL)a1 languageValues:(id)a2;

@end
