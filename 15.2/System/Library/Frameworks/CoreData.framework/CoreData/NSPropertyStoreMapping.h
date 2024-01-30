@class NSPropertyDescription;

@interface NSPropertyStoreMapping : NSStoreMapping {
    NSPropertyDescription *_property;
}

- (id)property;
- (id)initWithProperty:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
