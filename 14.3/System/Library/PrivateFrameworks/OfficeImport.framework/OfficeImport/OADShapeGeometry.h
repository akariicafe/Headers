@class NSMutableDictionary;

@interface OADShapeGeometry : NSObject {
    BOOL mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (int)type;
- (id)adjustValues;
- (id)equivalentCustomGeometry;
- (BOOL)isEscher;
- (int)adjustValueAtIndex:(unsigned int)a0;
- (void)setIsEscher:(BOOL)a0;
- (unsigned long long)adjustValueCount;
- (BOOL)hasAdjustValueAtIndex:(unsigned int)a0;
- (void)setAdjustValue:(int)a0 atIndex:(unsigned int)a1;

@end
