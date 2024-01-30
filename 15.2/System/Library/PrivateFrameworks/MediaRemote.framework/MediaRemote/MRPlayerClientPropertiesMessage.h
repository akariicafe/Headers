@class MRPlayerPath, NSDate;

@interface MRPlayerClientPropertiesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSDate *lastPlayingDate;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (id)initWithPlayerPath:(id)a0 lastPlayingDate:(id)a1;
- (unsigned long long)type;

@end
