@class NSMutableDictionary;

@interface CKVSearchContext : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_context;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)_supportedContextClasses;

- (void)encodeWithCoder:(id)a0;
- (BOOL)setContext:(id)a0 withType:(unsigned short)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contextForType:(unsigned short)a0;
- (void).cxx_destruct;

@end
