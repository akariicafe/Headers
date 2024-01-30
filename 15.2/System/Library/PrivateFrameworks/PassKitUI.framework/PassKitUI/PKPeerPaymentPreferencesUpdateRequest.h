@class PKPeerPaymentPreferences, NSMutableSet;

@interface PKPeerPaymentPreferencesUpdateRequest : NSObject

@property (readonly, nonatomic) PKPeerPaymentPreferences *updatedPreferences;
@property (readonly, copy, nonatomic) NSMutableSet *sections;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUpdatedPreferences:(id)a0 section:(long long)a1;
- (void)coalesceWithRequest:(id)a0;

@end
