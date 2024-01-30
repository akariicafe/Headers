@class NSNumber;

@interface TUConversationParticipantPresentationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long participantIdentifier;
@property (readonly, nonatomic) unsigned long long videoQuality;
@property (readonly, nonatomic) NSNumber *visibility;
@property (readonly, nonatomic) NSNumber *prominence;

- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithParticipantIdentifier:(unsigned long long)a0 videoQuality:(unsigned long long)a1 visibility:(id)a2 prominence:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
