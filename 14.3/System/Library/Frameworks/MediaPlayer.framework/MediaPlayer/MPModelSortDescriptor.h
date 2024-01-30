@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor

@property (copy, nonatomic) NSArray *keyPath;

+ (id)sortDescriptorWithKeyPath:(id)a0 ascending:(BOOL)a1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
