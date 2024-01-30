@class NSArray;

@interface CNUnifiedComposeRecipient : CNComposeRecipient {
    NSArray *_children;
}

- (void).cxx_destruct;
- (id)children;
- (BOOL)isEqual:(id)a0;
- (id)sortedChildren;
- (BOOL)showsChevronButton;
- (id)initWithChildren:(id)a0 defaultChild:(id)a1;

@end
