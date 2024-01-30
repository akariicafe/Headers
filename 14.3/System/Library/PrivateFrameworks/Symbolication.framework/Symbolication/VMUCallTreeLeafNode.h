@class NSCountedSet, NSString;

@interface VMUCallTreeLeafNode : VMUCallTreeNode {
    NSCountedSet *_addresses;
    NSString *_combinedName;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 address:(unsigned long long)a1 count:(unsigned int)a2 numBytes:(unsigned long long)a3;
- (void)getBrowserName:(id)a0;
- (void)addAddress:(unsigned long long)a0;

@end
