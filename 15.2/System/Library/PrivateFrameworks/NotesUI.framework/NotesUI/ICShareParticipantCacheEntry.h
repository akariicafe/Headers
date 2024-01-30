@class NSSet, NSString;

@interface ICShareParticipantCacheEntry : NSObject

@property (copy, nonatomic) NSSet *names;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *initials;
@property (copy, nonatomic) NSString *displayName;

- (void).cxx_destruct;

@end
