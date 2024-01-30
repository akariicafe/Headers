@class NSPropertyDescription;

@interface NSPropertyStoreMapping : NSStoreMapping {
    NSPropertyDescription *_property;
}

- (id)property;
- (void)setProperty:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithProperty:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
