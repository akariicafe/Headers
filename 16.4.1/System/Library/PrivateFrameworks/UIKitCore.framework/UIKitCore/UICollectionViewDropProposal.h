@interface UICollectionViewDropProposal : UIDropProposal

@property (nonatomic) long long intent;

- (id)description;
- (long long)dropLocation;
- (id)initWithDropOperation:(unsigned long long)a0;
- (id)initWithDropOperation:(unsigned long long)a0 dropLocation:(long long)a1;
- (id)initWithDropOperation:(unsigned long long)a0 intent:(long long)a1;

@end
