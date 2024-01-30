@class NSString, NSURL, NSData;

@interface SAStructuredDictationAddressResult : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *addressLabel;
@property (copy, nonatomic) NSURL *contactId;
@property (copy, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSData *forwardGeoProtobuf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)structuredDictationAddressResult;
+ (id)structuredDictationAddressResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
