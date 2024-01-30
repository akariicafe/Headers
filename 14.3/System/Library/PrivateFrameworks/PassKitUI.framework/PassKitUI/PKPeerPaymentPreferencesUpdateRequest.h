@class PKPeerPaymentPreferences, NSMutableSet;

@interface PKPeerPaymentPreferencesUpdateRequest : NSObject

@property (readonly, nonatomic) PKPeerPaymentPreferences *updatedPreferences;
@property (readonly, copy, nonatomic) NSMutableSet *sections;

- (void).cxx_destruct;
- (void)coalesceWithRequest:(id)a0;
- (id)initWithUpdatedPreferences:(id)a0 section:(long long)a1;
- (id)description;

@end
