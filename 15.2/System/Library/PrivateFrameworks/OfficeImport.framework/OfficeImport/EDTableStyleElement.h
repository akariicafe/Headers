@class NSString, EDCollection, EDDifferentialStyle;

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {
    EDCollection *mDifferentialStyles;
    int mType;
    unsigned int mBandSize;
    EDDifferentialStyle *mDifferentialStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableStyleElementWithResources:(id)a0;

- (id)initWithResources:(id)a0;
- (long long)key;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)type;
- (void)setType:(int)a0;
- (void)setDifferentialStyle:(id)a0;
- (id)differentialStyle;
- (unsigned int)bandSize;
- (void)setBandSize:(unsigned int)a0;
- (void)setDifferentialStyleWithIndex:(unsigned long long)a0;

@end
