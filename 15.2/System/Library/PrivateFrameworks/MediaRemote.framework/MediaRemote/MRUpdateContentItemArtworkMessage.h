@class MRPlayerPath, NSArray;

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSArray *contentItems;

- (id)initWithContentItems:(id)a0 forPlayerPath:(id)a1;
- (unsigned long long)type;

@end
