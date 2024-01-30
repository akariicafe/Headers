@class HKPairedFeatureAttributes, NSString, HKFeatureAttributes;

@interface HDLocalFeatureAttributesProvider : NSObject <HDPairedFeatureAttributesProviding> {
    HKFeatureAttributes *_localFeatureAttributes;
}

@property (readonly, copy, nonatomic) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLocalFeatureAttributes:(id)a0;
- (void).cxx_destruct;

@end
