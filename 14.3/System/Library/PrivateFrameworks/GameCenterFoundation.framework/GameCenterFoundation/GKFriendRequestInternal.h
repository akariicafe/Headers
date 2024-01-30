@class NSString, NSDate;

@interface GKFriendRequestInternal : GKFamiliarPlayerInternal

@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSDate *date;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (int)defaultFamiliarity;

@end
