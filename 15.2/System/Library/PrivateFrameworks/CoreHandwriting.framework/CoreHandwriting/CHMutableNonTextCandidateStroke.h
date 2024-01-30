@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (retain, nonatomic) NSDictionary *supportByStrokeIdentifier;

- (id)description;
- (BOOL)_removeSupportForStrokeIdentifier:(id)a0;
- (BOOL)_adjustSupportForLineClassificationByAddingStroke:(id)a0 consistingOfSubstrokes:(id)a1;
- (BOOL)_adjustSupportForContainerClassificationByAddingStroke:(id)a0 consistingOfSubstrokes:(id)a1;
- (void)_setSupportForStrokeIdentifier:(id)a0 support:(double)a1;
- (void)setSupportByStrokeIdentifier:(id)a0;
- (BOOL)adjustSupportByRemovingStrokeIdentifier:(id)a0;
- (BOOL)adjustSupportByAddingStroke:(id)a0 consistingOfSubstrokes:(id)a1;

@end
