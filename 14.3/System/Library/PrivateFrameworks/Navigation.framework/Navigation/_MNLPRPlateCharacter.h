@class NSArray, NSString, NSMutableOrderedSet, NSMutableDictionary;

@interface _MNLPRPlateCharacter : NSObject {
    NSMutableOrderedSet *_valueMappings;
    NSArray *_validReplacementChars;
    BOOL _isPickupChar;
    NSString *_glyph;
    NSMutableDictionary *_fillTypes;
}

- (void).cxx_destruct;
- (id)description;

@end
