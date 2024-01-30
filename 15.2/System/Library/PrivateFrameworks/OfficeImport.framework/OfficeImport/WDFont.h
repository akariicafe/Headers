@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {
    NSString *mName;
    NSMutableArray *mAlternateNames;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

+ (int)cpFontClassFromWdFontFamily:(int)a0;

- (id)alternateNames;
- (int)pitch;
- (void)setPitch:(int)a0;
- (int)characterSet;
- (void)setCharacterSet:(int)a0;
- (void)setName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (unsigned long long)hash;
- (int)fontFamily;
- (void)setFontFamily:(int)a0;
- (void)addAlternateName:(id)a0;
- (id)secondName;

@end
