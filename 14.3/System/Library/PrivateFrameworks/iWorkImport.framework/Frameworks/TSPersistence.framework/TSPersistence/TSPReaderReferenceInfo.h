@interface TSPReaderReferenceInfo : NSObject

@property (readonly, nonatomic) long long objectIdentifier;
@property (readonly, nonatomic) long long componentIdentifier;

+ (id)newReferenceInfoWithObjectIdentifier:(long long)a0 componentIdentifier:(long long)a1;

- (id)init;
- (id)initWithObjectIdentifier:(long long)a0 componentIdentifier:(long long)a1;

@end
