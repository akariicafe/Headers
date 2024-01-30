@class NSCountedSet, NSString;

@interface VMUCallTreeLeafNode : VMUCallTreeNode {
    NSCountedSet *_addresses;
    NSString *_combinedName;
}

- (id)init;
- (void).cxx_destruct;
- (void)addAddress:(unsigned long long)a0;
- (void)getBrowserName:(id)a0;
- (id)initWithName:(id)a0 address:(unsigned long long)a1 count:(unsigned int)a2 numBytes:(unsigned long long)a3;

@end
