@class NSString, SADialogText, SADialogConfiguration;

@interface SADialog : SABaseAceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) SADialogText *caption;
@property (retain, nonatomic) SADialogConfiguration *configuration;
@property (retain, nonatomic) SADialogText *content;
@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) BOOL printedOnly;
@property (nonatomic) BOOL spokenOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)encodedClassName;
- (id)groupIdentifier;

@end
