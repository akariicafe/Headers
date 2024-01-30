@class NSString, NSNumber, NSDate;

@interface GKCDFriendCodeDetail : NSManagedObject

@property (copy, nonatomic) NSString *alreadyUsedPlayerIds;
@property (copy, nonatomic) NSString *creatorPlayerId;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *friendCode;
@property (copy, nonatomic) NSString *friendCodeState;
@property (copy, nonatomic) NSNumber *numUses;

+ (id)fetchRequest;

@end
