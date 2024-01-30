@class NSString;

@interface TSWPOpaqueFontID : NSObject

@property (retain, nonatomic) NSString *postScriptName;
@property (retain, nonatomic) NSString *familyName;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFont:(id)a0;
- (id)initWithPostScriptName:(id)a0 familyName:(id)a1;

@end
