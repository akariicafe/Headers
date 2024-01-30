@class MRPlayerPath, NSArray;

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSArray *contentItems;

- (unsigned long long)type;
- (id)initWithContentItems:(id)a0 forPlayerPath:(id)a1;

@end
