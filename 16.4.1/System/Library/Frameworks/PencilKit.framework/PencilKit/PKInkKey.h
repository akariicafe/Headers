@class NSString;

@interface PKInkKey : NSObject <NSCopying> {
    NSString *_identifier;
    unsigned long long _version;
    NSString *_variant;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
