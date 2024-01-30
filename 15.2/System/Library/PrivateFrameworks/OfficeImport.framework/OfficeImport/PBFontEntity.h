@class NSString;

@interface PBFontEntity : NSObject {
    NSString *mFaceName;
    int mCharSet;
    int mType;
    int mFamily;
}

- (int)family;
- (void).cxx_destruct;
- (int)type;
- (int)charSet;
- (id)faceName;
- (id)initWithName:(id)a0 charSet:(int)a1 type:(int)a2 family:(int)a3;

@end
