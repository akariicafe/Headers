@class NSString;

@interface TCOfficeFontInfo : NSObject

@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL isBold;
@property (readonly, nonatomic) BOOL isItalic;

+ (id)officeFontInfoWithFullName:(id)a0 isBold:(BOOL)a1 isItalic:(BOOL)a2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFullName:(id)a0 isBold:(BOOL)a1 isItalic:(BOOL)a2;
- (id)officeName;

@end
