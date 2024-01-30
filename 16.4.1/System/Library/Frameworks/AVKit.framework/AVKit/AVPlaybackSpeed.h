@class NSArray, NSString;

@interface AVPlaybackSpeed : NSObject {
    BOOL _synthesized;
}

@property (class, readonly, nonatomic) NSArray *systemDefaultSpeeds;

@property (readonly, nonatomic) float rate;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNumericName;

+ (id)_rateFormattedAsString:(float)a0;

- (id)internalDescription;
- (BOOL)isSynthesized;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)compactLocalizedName;
- (id)initWithRate:(float)a0 localizedName:(id)a1;
- (id)initWithRate:(float)a0 localizedName:(id)a1 synthesized:(BOOL)a2;

@end
