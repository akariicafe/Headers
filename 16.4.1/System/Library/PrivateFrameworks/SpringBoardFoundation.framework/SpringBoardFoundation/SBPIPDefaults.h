@class NSDictionary;

@interface SBPIPDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSDictionary *lastKnownCornerPositionByContentType;
@property (nonatomic) NSDictionary *lastKnownSizeByContentType;
@property (readonly, nonatomic) BOOL allowAutoPIP;
@property (readonly, nonatomic) BOOL visualizeKeyboardFrame;
@property (readonly, nonatomic) BOOL visualizePositionRegions;
@property (nonatomic) BOOL initiallyUsesMinimumPreferredContentSize;

- (void)_bindAndRegisterDefaults;
- (unsigned long long)lastKnownCornerPositionForContentType:(id)a0;
- (double)lastKnownSizeForContentType:(id)a0;
- (void)setLastKnownCornerPosition:(unsigned long long)a0 contentType:(id)a1;
- (void)setLastKnownSize:(double)a0 contentType:(id)a1;

@end
