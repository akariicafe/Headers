@class NSArray;

@interface CNUnifiedComposeRecipient : CNComposeRecipient {
    NSArray *_children;
}

- (BOOL)isEqual:(id)a0;
- (id)children;
- (void).cxx_destruct;
- (id)initWithChildren:(id)a0 defaultChild:(id)a1;
- (id)sortedChildren;
- (BOOL)showsChevronButton;

@end
