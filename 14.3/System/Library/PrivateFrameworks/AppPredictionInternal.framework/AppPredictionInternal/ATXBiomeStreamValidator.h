@interface ATXBiomeStreamValidator : NSObject

- (void)validateChronologicalPublicStreamWithStreamIdentifier:(id)a0 activity:(id)a1;
- (void)validateChronologicalPrivateStreamWithStreamIdentifier:(id)a0 activity:(id)a1;
- (void)validateChronologicalWithStreamIdentifier:(id)a0 activitiy:(id)a1 config:(id)a2;

@end
