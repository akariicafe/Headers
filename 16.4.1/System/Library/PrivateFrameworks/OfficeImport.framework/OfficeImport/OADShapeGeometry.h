@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject {
    BOOL mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (int)type;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (int)adjustValueAtIndex:(unsigned int)a0;
- (unsigned long long)adjustValueCount;
- (id)adjustValues;
- (id)equivalentCustomGeometry;
- (BOOL)hasAdjustValueAtIndex:(unsigned int)a0;
- (BOOL)isEscher;
- (void)setAdjustValue:(int)a0 atIndex:(unsigned int)a1;
- (void)setIsEscher:(BOOL)a0;

@end
