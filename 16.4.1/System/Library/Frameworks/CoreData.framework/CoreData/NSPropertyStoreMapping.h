@class NSPropertyDescription;

@interface NSPropertyStoreMapping : NSStoreMapping {
    NSPropertyDescription *_property;
}

- (id)initWithProperty:(id)a0;
- (id)property;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
