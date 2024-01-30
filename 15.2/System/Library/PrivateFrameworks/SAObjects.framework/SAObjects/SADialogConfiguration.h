@class NSString;
@protocol SAAceSerializable;

@interface SADialogConfiguration : SABaseAceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SAAceSerializable> context;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *languageCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)encodedClassName;
- (id)groupIdentifier;

@end
