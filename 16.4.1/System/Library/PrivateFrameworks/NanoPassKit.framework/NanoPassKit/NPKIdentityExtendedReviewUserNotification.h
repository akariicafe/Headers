@class NSString;

@interface NPKIdentityExtendedReviewUserNotification : NPKUserNotification

@property (readonly, nonatomic) unsigned long long notificationType;
@property (readonly, nonatomic) unsigned long long documentType;
@property (readonly, nonatomic) NSString *issuerName;

- (id)body;
- (id)title;
- (void).cxx_destruct;
- (id)identifierHashComponents;
- (id)initWithNotificationType:(unsigned long long)a0 documentType:(unsigned long long)a1 issuerName:(id)a2;

@end
