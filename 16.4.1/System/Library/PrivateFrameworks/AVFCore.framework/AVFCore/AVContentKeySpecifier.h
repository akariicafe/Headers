@class NSData, NSString, NSDictionary;

@interface AVContentKeySpecifier : NSObject {
    NSData *_initializationData;
}

@property (readonly) NSData *initializationData;
@property (readonly) NSString *keySystem;
@property (readonly) id identifier;
@property (readonly) NSDictionary *options;

+ (id)contentKeySpecifierForKeySystem:(id)a0 identifier:(id)a1 options:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initForKeySystem:(id)a0 identifier:(id)a1 initializationData:(id)a2 options:(id)a3;
- (id)initForKeySystem:(id)a0 identifier:(id)a1 options:(id)a2;
- (id)initForKeySystem:(id)a0 initializationData:(id)a1;

@end
