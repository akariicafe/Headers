@class NSUUID, NSData, NSDate;

@interface AVTAvatarManagedRecord : NSManagedObject

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSData *avatarData;
@property (retain, nonatomic) NSDate *orderDate;

@end
