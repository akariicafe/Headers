@class NSString;

@interface SSXPCEncodableRectWrapper : NSObject <BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)encodedRectsInDictionary:(id)a0 forKey:(id)a1;
+ (void)encodeRects:(id)a0 inDictionary:(id)a1 forKey:(id)a2;

@end
