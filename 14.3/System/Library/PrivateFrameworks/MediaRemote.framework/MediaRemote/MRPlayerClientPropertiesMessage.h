@class MRPlayerPath, NSDate;

@interface MRPlayerClientPropertiesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSDate *lastPlayingDate;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (unsigned long long)type;
- (id)initWithPlayerPath:(id)a0 lastPlayingDate:(id)a1;

@end
