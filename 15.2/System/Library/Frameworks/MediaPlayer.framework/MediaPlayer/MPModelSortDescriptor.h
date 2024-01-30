@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor

@property (copy, nonatomic) NSArray *keyPath;

+ (BOOL)supportsSecureCoding;
+ (id)sortDescriptorWithKeyPath:(id)a0 ascending:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
