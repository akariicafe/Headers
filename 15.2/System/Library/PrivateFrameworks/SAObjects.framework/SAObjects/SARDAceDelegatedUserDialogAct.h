@class NSString;

@interface SARDAceDelegatedUserDialogAct : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long asrHypothesisIndex;
@property (copy, nonatomic) NSString *externalParserId;
@property (copy, nonatomic) NSString *rewrittenUtterance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)encodedClassName;
- (id)groupIdentifier;

@end
