@class NSArray, SASyncAppIdentifyingInfo, NSString, NSNumber;

@interface SASyncAppMetaData : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SASyncAppIdentifyingInfo *appIdentifyingInfo;
@property (copy, nonatomic) NSNumber *developerMode;
@property (copy, nonatomic) NSArray *syncSlots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appMetaData;
+ (id)appMetaDataWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
