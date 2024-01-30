@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (retain, nonatomic) NSDictionary *supportByStrokeIdentifier;

- (id)description;
- (BOOL)_adjustSupportForContainerClassificationByAddingStroke:(id)a0 consistingOfSubstrokes:(id)a1;
- (BOOL)_adjustSupportForLineClassificationByAddingStroke:(id)a0 consistingOfSubstrokes:(id)a1;
- (BOOL)_removeSupportForStrokeIdentifier:(id)a0;
- (void)_setSupportForStrokeIdentifier:(id)a0 support:(double)a1;
- (BOOL)adjustSupportByAddingStroke:(id)a0 consistingOfSubstrokes:(id)a1;
- (BOOL)adjustSupportByRemovingStrokeIdentifier:(id)a0;
- (void)setSupportByStrokeIdentifier:(id)a0;

@end
