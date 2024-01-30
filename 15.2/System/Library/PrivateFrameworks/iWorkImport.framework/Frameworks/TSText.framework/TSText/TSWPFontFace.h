@class NSString;

@interface TSWPFontFace : NSObject

@property (retain, nonatomic) NSString *postScriptName;
@property (retain, nonatomic) NSString *faceName;

+ (id)fontFaceWithPostScriptName:(id)a0 faceName:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPostScriptName:(id)a0 faceName:(id)a1;

@end
