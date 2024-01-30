@class NSString;

@interface REMAuxiliaryReminderChangeMoveInfo : REMAuxiliaryChangeInfoType <REMAuxiliaryReminderChangeInfo>

@property (readonly, nonatomic) NSString *reminderIdentifier;
@property (readonly, nonatomic) NSString *oldListIdentifier;
@property (readonly, nonatomic) NSString *oldExternalIdentifier;

+ (id)cdEntityName;

@end
