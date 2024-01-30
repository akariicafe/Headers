@class NSUUID, NSString;

@interface MPCSharedListeningEventParticipant : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *sharedListeningIdentifier;
@property (readonly, copy, nonatomic) NSString *externalIdentifier;

+ (id)participantWithSharedListeningIdentifier:(id)a0 externalIdentifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
