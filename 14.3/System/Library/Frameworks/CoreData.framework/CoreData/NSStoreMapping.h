@class NSString;

@interface NSStoreMapping : NSObject {
    NSString *_externalName;
}

- (void)setExternalName:(id)a0;
- (id)initWithExternalName:(id)a0;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)externalName;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
