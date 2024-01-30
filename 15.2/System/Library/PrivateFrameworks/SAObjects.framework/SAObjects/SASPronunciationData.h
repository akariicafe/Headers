@class NSString, NSArray;

@interface SASPronunciationData : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *apgId;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (nonatomic) long long tokenOffset;
@property (copy, nonatomic) NSArray *ttsPronunciations;
@property (copy, nonatomic) NSString *ttsVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pronunciationData;
+ (id)pronunciationDataWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
