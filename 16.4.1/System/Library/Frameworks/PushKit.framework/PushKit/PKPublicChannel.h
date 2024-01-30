@class NSString, NSDictionary;

@interface PKPublicChannel : NSObject

@property (copy, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSString *channelTopic;
@property (retain, nonatomic) NSString *environment;
@property (retain, nonatomic) NSString *tokenName;
@property (nonatomic) unsigned long long checkpoint;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void)resetCheckpoint;
- (id)initWithChannelID:(id)a0 channelTopic:(id)a1 environment:(id)a2 tokenName:(id)a3 checkpoint:(unsigned long long)a4;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithChannelID:(id)a0 channelTopic:(id)a1 environment:(id)a2 checkpoint:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0;

@end
