@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <NSCopying> {
    NSMutableArray *_attributes;
}

@property (copy, nonatomic) NSDictionary *attributesAsDictionary;

- (BOOL)hasAttributes;
- (void)close;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAttribute:(id)a0 value:(id)a1;
- (void)writeAttributes:(id)a0;
- (id)initWithXMLAttributes:(id)a0;

@end
