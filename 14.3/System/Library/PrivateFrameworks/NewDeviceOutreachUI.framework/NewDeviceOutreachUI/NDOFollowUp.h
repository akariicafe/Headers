@interface NDOFollowUp : NSObject

- (void)clearFollowUp;
- (BOOL)followupExists;
- (void)postFollowUpWithWarranty:(id)a0 serialNumber:(id)a1;
- (void)postFollowUpWithWarranty:(id)a0 serialNumber:(id)a1 uniqueIdentifier:(id)a2;
- (void)_setupFollowUpItem:(id)a0 withWarranty:(id)a1 serialNumber:(id)a2;
- (BOOL)refreshFollowupWithWarranty:(id)a0 serialNumber:(id)a1;
- (void)badgeFollowup;

@end
