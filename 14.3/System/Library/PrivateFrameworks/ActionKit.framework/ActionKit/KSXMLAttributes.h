@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <NSCopying> {
    NSMutableArray *_attributes;
}

@property (copy, nonatomic) NSDictionary *attributesAsDictionary;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasAttributes;
- (id)description;
- (void)addAttribute:(id)a0 value:(id)a1;
- (void)writeAttributes:(id)a0;
- (id)initWithXMLAttributes:(id)a0;

@end
