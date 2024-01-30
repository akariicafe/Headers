@class NSString;

@interface IKCSSDeclaration : NSObject

@property unsigned long long type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *aliasedName;
@property BOOL important;
@property (readonly, nonatomic) NSString *stringValue;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } nameRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } valueRange;

+ (id)typeString:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)description;

@end
