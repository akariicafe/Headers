@class NSString;

@interface SNKeyValueMutation : NSObject <NSCopying> {
    int _type;
    NSString *_keyPath;
    id _value;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
