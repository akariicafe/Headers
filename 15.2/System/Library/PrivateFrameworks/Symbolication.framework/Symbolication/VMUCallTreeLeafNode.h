@class NSCountedSet, NSString;

@interface VMUCallTreeLeafNode : VMUCallTreeNode {
    NSCountedSet *_addresses;
    NSString *_combinedName;
}

- (void).cxx_destruct;
- (id)init;
- (void)addAddress:(unsigned long long)a0;
- (id)initWithName:(id)a0 address:(unsigned long long)a1 count:(unsigned int)a2 numBytes:(unsigned long long)a3;
- (void)getBrowserName:(id)a0;

@end
