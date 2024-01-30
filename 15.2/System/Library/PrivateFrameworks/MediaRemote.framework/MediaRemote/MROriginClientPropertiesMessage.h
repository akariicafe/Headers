@class NSDate;

@interface MROriginClientPropertiesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSDate *lastPlayingDate;

- (id)initWithLastPlayingDate:(id)a0;
- (unsigned long long)type;

@end
