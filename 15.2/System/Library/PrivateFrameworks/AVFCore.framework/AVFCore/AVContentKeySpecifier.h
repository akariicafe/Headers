@class NSString, NSDictionary;

@interface AVContentKeySpecifier : NSObject

@property (readonly) NSString *keySystem;
@property (readonly) id identifier;
@property (readonly) NSDictionary *options;

+ (id)contentKeySpecifierForKeySystem:(id)a0 identifier:(id)a1 options:(id)a2;

- (id)initForKeySystem:(id)a0 identifier:(id)a1 options:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
