@class NSString;

@interface NSStoreMapping : NSObject {
    NSString *_externalName;
}

- (id)externalName;
- (id)initWithExternalName:(id)a0;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
