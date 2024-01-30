@class NSString, NSArray;

@interface CKContextUIElement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) NSArray *superviewClassNames;
@property (nonatomic) float fontSize;
@property (nonatomic) float density;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInWindow;
@property (nonatomic) struct CGPoint { double x; double y; } absoluteOriginOnScreen;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;

- (id)toJSONSerializableDictionary;
- (id)initWithText:(id)a0 className:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (long long)compareByPosition:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
