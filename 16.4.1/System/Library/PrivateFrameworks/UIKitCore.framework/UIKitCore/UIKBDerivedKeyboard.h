@class NSString;

@interface UIKBDerivedKeyboard : NSObject

@property (nonatomic) struct CGSize { double width; double height; } keyboardSize;
@property (nonatomic) struct CGSize { double width; double height; } keyboardSizeBasis;
@property (copy, nonatomic) NSString *derivedKBStarPrefixName;
@property (nonatomic) BOOL addsSupplementaryControlKeys;

- (void).cxx_destruct;

@end
