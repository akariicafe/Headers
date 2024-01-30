@class NSString;

@interface PKInkKey : NSObject <NSCopying> {
    NSString *_identifier;
    unsigned long long _version;
    NSString *_variant;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
