@class NSString;

@interface AVTCoreModelPairing : NSObject

@property (readonly, nonatomic) long long pairedCategory;
@property (readonly, copy, nonatomic) NSString *localizedPairedTitle;
@property (readonly, copy, nonatomic) NSString *localizedPairTitle;
@property (readonly, copy, nonatomic) NSString *localizedUnpairTitle;
@property (readonly, copy, nonatomic) NSString *localizedPairedDescription;
@property (readonly, copy, nonatomic) NSString *localizedUnpairedDescription;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPairedCategory:(long long)a0 pairedTitle:(id)a1 pairTitle:(id)a2 unpairTitle:(id)a3 pairedDescription:(id)a4 unpairedDescription:(id)a5;

@end
