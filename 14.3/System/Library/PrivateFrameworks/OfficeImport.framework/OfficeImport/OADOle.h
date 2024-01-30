@class NSString;

@interface OADOle : NSObject {
    BOOL mIconic;
    NSString *mCLSID;
    NSString *mAnsiUserType;
    NSString *mAnsiClipboardFormatName;
    unsigned int mWinClipboardFormat;
    NSString *mMacClipboardFormat;
    NSString *mAnsiProgID;
    NSString *mUnicodeUserType;
    NSString *mUnicodeClipboardFormatName;
    NSString *mUnicodeProgID;
    id mObject;
}

+ (BOOL)isProgIDChart:(id)a0;
+ (BOOL)isProgIDMathType:(id)a0;
+ (BOOL)isCLSIDSupported:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (id)CLSID;
- (id)object;
- (id)description;
- (BOOL)iconic;
- (void)setIconic:(BOOL)a0;
- (void)setCLSID:(id)a0;
- (id)ansiUserType;
- (void)setAnsiUserType:(id)a0;
- (id)ansiClipboardFormatName;
- (void)setAnsiClipboardFormatName:(id)a0;
- (unsigned int)winClipboardFormat;
- (void)setWinClipboardFormat:(unsigned int)a0;
- (id)macClipboardFormat;
- (void)setMacClipboardFormat:(id)a0;
- (id)ansiProgID;
- (void)setAnsiProgID:(id)a0;
- (id)unicodeUserType;
- (void)setUnicodeUserType:(id)a0;
- (id)unicodeClipboardFormatName;
- (void)setUnicodeClipboardFormatName:(id)a0;
- (id)unicodeProgID;
- (void)setUnicodeProgID:(id)a0;

@end
