@interface ATXBiomeStreamValidator : NSObject

- (void)validateChronologicalPublicStreamWithStreamIdentifier:(id)a0 activity:(id)a1;
- (void)validateChronologicalPrivateStreamWithStreamIdentifier:(id)a0 activity:(id)a1;
- (int)validateChronologicalWithStreamIdentifier:(id)a0 activity:(id)a1 config:(id)a2;

@end
