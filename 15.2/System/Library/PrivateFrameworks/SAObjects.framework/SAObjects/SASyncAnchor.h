@class NSString, NSNumber, SASyncAppMetaData;

@interface SASyncAnchor : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) SASyncAppMetaData *appMetaData;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *generation;
@property (copy, nonatomic) NSString *intentSlotName;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSNumber *suspendDurationInSeconds;
@property (copy, nonatomic) NSString *suspendReason;
@property (copy, nonatomic) NSString *validity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchor;
+ (id)anchorWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
