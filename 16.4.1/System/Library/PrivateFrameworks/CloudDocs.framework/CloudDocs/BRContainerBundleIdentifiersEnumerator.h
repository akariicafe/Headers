@class NSEnumerator;

@interface BRContainerBundleIdentifiersEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
}

- (id)nextObject;
- (id)initWithContainerPlist:(id)a0;
- (void).cxx_destruct;

@end
