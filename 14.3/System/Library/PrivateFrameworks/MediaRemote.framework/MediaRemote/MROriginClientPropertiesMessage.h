@class NSDate;

@interface MROriginClientPropertiesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSDate *lastPlayingDate;

- (unsigned long long)type;
- (id)initWithLastPlayingDate:(id)a0;

@end
