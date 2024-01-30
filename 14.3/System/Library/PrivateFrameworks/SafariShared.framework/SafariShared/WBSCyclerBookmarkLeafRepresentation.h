@class NSURL;

@interface WBSCyclerBookmarkLeafRepresentation : WBSCyclerBookmarkRepresentation

@property (retain, nonatomic, setter=setURL:) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 uniqueIdentifier:(id)a1;
- (id)initWithURL:(id)a0 title:(id)a1 uniqueIdentifier:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
