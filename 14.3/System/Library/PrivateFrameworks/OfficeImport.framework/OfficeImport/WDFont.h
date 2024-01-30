@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {
    NSString *mName;
    NSMutableArray *mAlternateNames;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

+ (int)cpFontClassFromWdFontFamily:(int)a0;

- (int)pitch;
- (id)alternateNames;
- (void)setName:(id)a0;
- (void)setPitch:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCharacterSet:(int)a0;
- (unsigned long long)hash;
- (int)characterSet;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)initWithName:(id)a0;
- (int)fontFamily;
- (void)setFontFamily:(int)a0;
- (void)addAlternateName:(id)a0;
- (id)secondName;

@end
