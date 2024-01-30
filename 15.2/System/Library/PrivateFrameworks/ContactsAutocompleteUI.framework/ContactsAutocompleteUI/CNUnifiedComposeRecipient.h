@class NSArray;

@interface CNUnifiedComposeRecipient : CNComposeRecipient {
    NSArray *_children;
}

- (id)children;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithChildren:(id)a0 defaultChild:(id)a1;
- (id)sortedChildren;
- (BOOL)showsChevronButton;

@end
