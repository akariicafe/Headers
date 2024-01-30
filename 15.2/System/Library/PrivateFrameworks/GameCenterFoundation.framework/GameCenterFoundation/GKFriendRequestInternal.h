@class NSString, NSDate;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal

@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (int)defaultFamiliarity;

@end
