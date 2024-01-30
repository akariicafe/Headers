@class NSUUID, CPListTemplate, NSString, CPMessageListItemTrailingConfiguration, CPMessageListItemLeadingConfiguration;

@interface CPMessageListItem : NSObject <CPListItemPrivate, NSSecureCoding, CPListTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) CPListTemplate *listTemplate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (copy, nonatomic) NSString *phoneOrEmailAddress;
@property (retain, nonatomic) CPMessageListItemLeadingConfiguration *leadingConfiguration;
@property (retain, nonatomic) CPMessageListItemTrailingConfiguration *trailingConfiguration;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *trailingText;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) id userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setNeedsUpdate;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConversationIdentifier:(id)a0 text:(id)a1 leadingConfiguration:(id)a2 trailingConfiguration:(id)a3 detailText:(id)a4 trailingText:(id)a5;
- (id)initWithFullName:(id)a0 phoneOrEmailAddress:(id)a1 leadingConfiguration:(id)a2 trailingConfiguration:(id)a3 detailText:(id)a4 trailingText:(id)a5;

@end
