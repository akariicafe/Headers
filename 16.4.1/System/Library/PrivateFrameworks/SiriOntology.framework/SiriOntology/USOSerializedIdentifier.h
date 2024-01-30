@class NSString, NSNumber;

@interface USOSerializedIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long nodeIndex;
@property (readonly) NSString *value;
@property (readonly) NSString *appBundleId;
@property (readonly) NSString *namespaceString;
@property (readonly) NSNumber *probability;
@property (readonly) NSNumber *sourceComponent;
@property (readonly) NSNumber *groupIndex;
@property (readonly) NSNumber *interpretationGroup;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNodeIndex:(unsigned long long)a0 value:(id)a1 appBundleId:(id)a2 namespaceString:(id)a3 probability:(id)a4 sourceComponent:(id)a5 groupIndex:(id)a6 interpretationGroup:(id)a7;
- (id)initWithNodeIndex:(unsigned long long)a0 value:(id)a1 appBundleId:(id)a2 namespaceString:(id)a3;
- (id)initWithNodeIndex:(unsigned long long)a0 value:(id)a1 appBundleId:(id)a2 namespaceString:(id)a3 probability:(id)a4;
- (id)initWithNodeIndex:(unsigned long long)a0 value:(id)a1 appBundleId:(id)a2 namespaceString:(id)a3 probability:(id)a4 sourceComponent:(id)a5;
- (id)initWithNodeIndex:(unsigned long long)a0 value:(id)a1 appBundleId:(id)a2 namespaceString:(id)a3 probability:(id)a4 sourceComponent:(id)a5 groupIndex:(id)a6;

@end
