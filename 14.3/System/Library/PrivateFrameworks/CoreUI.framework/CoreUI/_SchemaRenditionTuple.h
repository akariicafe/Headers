@class NSMutableDictionary;

@interface _SchemaRenditionTuple : NSObject {
    struct _renditionkeytoken { unsigned short identifier; unsigned short value; } key[22];
    NSMutableDictionary *info;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;

@end
