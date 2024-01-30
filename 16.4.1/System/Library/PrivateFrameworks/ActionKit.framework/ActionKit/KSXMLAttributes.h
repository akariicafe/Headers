@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <NSCopying> {
    NSMutableArray *_attributes;
}

@property (copy, nonatomic) NSDictionary *attributesAsDictionary;

- (BOOL)hasAttributes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)close;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)addAttribute:(id)a0 value:(id)a1;
- (id)initWithXMLAttributes:(id)a0;
- (void)writeAttributes:(id)a0;

@end
