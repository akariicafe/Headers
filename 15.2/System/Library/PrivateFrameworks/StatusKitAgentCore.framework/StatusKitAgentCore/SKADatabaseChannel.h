@class NSString, MPStatusKitOutgoingRatchet, NSData, NSArray;

@interface SKADatabaseChannel : NSObject

@property (readonly, nonatomic) MPStatusKitOutgoingRatchet *currentOutgoingRatchet;
@property (readonly, nonatomic) NSData *channelToken;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isPersonal) BOOL personal;
@property (readonly, nonatomic, getter=isDecomissioned) BOOL decomissioned;
@property (readonly, nonatomic) NSData *currentOutgoingRatchetState;
@property (retain, nonatomic) NSData *dateChannelCreated;
@property (readonly, copy, nonatomic) NSString *statusType;
@property (readonly, copy, nonatomic) NSArray *invitedUsers;

+ (id)logger;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChannelToken:(id)a0 identifier:(id)a1 personal:(BOOL)a2 decomissioned:(BOOL)a3 currentOutgoingRatchetState:(id)a4 dateCreated:(id)a5 statusType:(id)a6 invitedUsers:(id)a7;
- (id)initWithCoreDataChannels:(id)a0;

@end
