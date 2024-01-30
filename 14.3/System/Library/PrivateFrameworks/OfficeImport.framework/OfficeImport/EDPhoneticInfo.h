@class NSString, EDResources, EDCollection;

@interface EDPhoneticInfo : NSObject <NSCopying, EDImmutableObject> {
    EDResources *mResources;
    unsigned long long mFontIndex;
    NSString *mString;
    int mType;
    int mAlign;
    EDCollection *mRuns;
    BOOL mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)phoneticInfoWithResources:(id)a0;

- (void)setString:(id)a0;
- (id)font;
- (void)setFontIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)align;
- (id)runs;
- (id)initWithResources:(id)a0;
- (void)setType:(int)a0;
- (void)setFont:(id)a0;
- (id)string;
- (void)appendString:(id)a0;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (void)prependString:(id)a0;
- (unsigned long long)fontIndex;
- (void)setAlign:(int)a0;
- (void)setDoNotModify:(BOOL)a0;
- (BOOL)isEqualToEDPhoneticInfo:(id)a0;

@end
