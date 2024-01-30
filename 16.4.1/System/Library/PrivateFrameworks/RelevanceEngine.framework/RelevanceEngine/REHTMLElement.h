@class NSArray, NSDictionary, NSData;

@interface REHTMLElement : NSObject <NSCopying> {
    NSData *_data;
}

@property (readonly, nonatomic) NSArray *classes;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSData *encodedData;

+ (id)h2:(id)a0;
+ (id)h4:(id)a0;
+ (id)h6:(id)a0;
+ (id)script:(id)a0;
+ (id)div;
+ (id)h1:(id)a0;
+ (id)h3:(id)a0;
+ (id)h5:(id)a0;
+ (id)nav;
+ (unsigned long long)_defaultStringEncoding;
+ (id)elementWithHTMLData:(id)a0;
+ (id)elementWithHTMLString:(id)a0;
+ (id)htmlElementWithTag:(id)a0 content:(id)a1;
+ (id)link:(id)a0 title:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)addChild:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_contentString;
- (id)addChildren:(id)a0;
- (id)_encodeString:(id)a0;
- (id)_encodedData;
- (id)append:(id)a0;
- (id)elementByAddingAtttibute:(id)a0 value:(id)a1;
- (id)_prefixContentString;
- (id)_suffixContentString;
- (id)elementByAddingAtttibutes:(id)a0;
- (id)elementByAddingClass:(id)a0;
- (id)elementByAddingClasses:(id)a0;
- (id)elementBySettingAtttibutes:(id)a0;
- (id)elementBySettingClasses:(id)a0;

@end
