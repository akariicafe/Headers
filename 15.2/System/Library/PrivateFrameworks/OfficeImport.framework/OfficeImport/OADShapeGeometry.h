@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject {
    BOOL mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (int)type;
- (void)setIsEscher:(BOOL)a0;
- (unsigned long long)adjustValueCount;
- (BOOL)hasAdjustValueAtIndex:(unsigned int)a0;
- (int)adjustValueAtIndex:(unsigned int)a0;
- (void)setAdjustValue:(int)a0 atIndex:(unsigned int)a1;
- (BOOL)isEscher;
- (id)equivalentCustomGeometry;
- (id)adjustValues;

@end
