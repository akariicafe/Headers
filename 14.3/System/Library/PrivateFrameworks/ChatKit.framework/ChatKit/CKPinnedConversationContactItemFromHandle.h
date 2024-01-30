@class NSString, CKEntity;

@interface CKPinnedConversationContactItemFromHandle : NSObject <CKPinnedConversationContactItem>

@property (retain, nonatomic) CKEntity *entity;
@property (nonatomic) double contentScale;
@property (nonatomic) long long contactItemAlignment;
@property (readonly, nonatomic) NSString *contactItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
