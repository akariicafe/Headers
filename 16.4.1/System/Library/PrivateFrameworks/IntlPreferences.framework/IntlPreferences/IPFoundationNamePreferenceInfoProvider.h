@class NSString;

@interface IPFoundationNamePreferenceInfoProvider : NSObject <IPNamePreferenceInfoProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domain;
+ (id)nativeKeyNameToCanonicalKeyName;
+ (id)canonicalKeyToValueIdentifierToNumericValueMap;
+ (id)canonicalNameToNativeKeyName;
+ (id)valueIdentifierToValueMapFromCanonicalKey:(id)a0;
+ (id)valueToValueIdentifierMapFromCanonicalKey:(id)a0;


@end
