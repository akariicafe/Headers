@interface WDRubyProperties : NSObject {
    unsigned char mOriginal : 1;
    struct { int x0; unsigned short x1; unsigned short x2; unsigned short x3; int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } *mOriginalProperties;
}

@property (nonatomic) int alignment;
@property (nonatomic) unsigned short phoneticGuideFontSize;
@property (nonatomic) unsigned short baseFontSize;
@property (nonatomic) unsigned short distanceBetween;
@property (nonatomic) int phoneticGuideLanguage;

- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)isAnythingOverridden;
- (BOOL)isAlignmentOverridden;
- (BOOL)isAnythingOverriddenIn:(struct { int x0; unsigned short x1; unsigned short x2; unsigned short x3; int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (void)clearAlignment;
- (BOOL)isPhoneticGuideFontSizeOverridden;
- (void)clearPhoneticGuideFontSize;
- (BOOL)isBaseFontSizeOverridden;
- (void)clearBaseFontSize;
- (BOOL)isDistanceBetweenOverridden;
- (void)clearDistanceBetween;
- (BOOL)isPhoneticGuideLanguageOverridden;
- (void)clearPhoneticGuideLanguage;

@end
