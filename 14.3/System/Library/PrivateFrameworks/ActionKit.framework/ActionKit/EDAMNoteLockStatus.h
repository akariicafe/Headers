@class NSNumber, NSArray, NSDictionary;

@interface EDAMNoteLockStatus : FATObject

@property (retain, nonatomic) NSNumber *noteUpdateSequenceNumber;
@property (retain, nonatomic) NSNumber *lockHolderUserId;
@property (retain, nonatomic) NSNumber *lockRenewBy;
@property (retain, nonatomic) NSArray *viewingUserIds;
@property (retain, nonatomic) NSNumber *viewIdleExpiration;
@property (retain, nonatomic) NSDictionary *unknownUsers;
@property (retain, nonatomic) NSNumber *currentTime;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
