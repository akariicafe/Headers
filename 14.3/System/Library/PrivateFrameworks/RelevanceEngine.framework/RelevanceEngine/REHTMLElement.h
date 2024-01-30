@class NSArray, NSDictionary, NSData;

@interface REHTMLElement : NSObject <NSCopying> {
    NSData *_data;
}

@property (readonly, nonatomic) NSArray *classes;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSData *encodedData;

+ (id)nav;
+ (id)div;
+ (id)h1:(id)a0;
+ (id)h2:(id)a0;
+ (id)h3:(id)a0;
+ (id)h4:(id)a0;
+ (id)h5:(id)a0;
+ (id)h6:(id)a0;
+ (id)script:(id)a0;
+ (id)elementWithHTMLString:(id)a0;
+ (id)htmlElementWithTag:(id)a0 content:(id)a1;
+ (id)link:(id)a0 title:(id)a1;
+ (id)elementWithHTMLData:(id)a0;
+ (unsigned long long)_defaultStringEncoding;

- (id)init;
- (id)addChild:(id)a0;
- (void).cxx_destruct;
- (id)addChildren:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_encodedData;
- (id)_encodeString:(id)a0;
- (id)_contentString;
- (id)append:(id)a0;
- (id)_prefixContentString;
- (id)_suffixContentString;
- (id)elementByAddingClass:(id)a0;
- (id)elementByAddingClasses:(id)a0;
- (id)elementBySettingClasses:(id)a0;
- (id)elementBySettingAtttibutes:(id)a0;
- (id)elementByAddingAtttibute:(id)a0 value:(id)a1;
- (id)elementByAddingAtttibutes:(id)a0;

@end
