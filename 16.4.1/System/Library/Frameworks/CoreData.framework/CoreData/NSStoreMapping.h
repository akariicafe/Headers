@class NSString;

@interface NSStoreMapping : NSObject {
    NSString *_externalName;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)externalName;
- (id)initWithExternalName:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
