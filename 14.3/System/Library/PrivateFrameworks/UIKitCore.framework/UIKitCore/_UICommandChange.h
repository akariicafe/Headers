@interface _UICommandChange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id anchor;

- (void)acceptItemInsertionVisit:(id /* block */)a0 itemDeletionVisit:(id /* block */)a1 menuInsertionVisit:(id /* block */)a2 menuDeletionVisit:(id /* block */)a3;
- (BOOL)acceptBoolItemInsertionVisit:(id /* block */)a0 itemDeletionVisit:(id /* block */)a1 menuInsertionVisit:(id /* block */)a2 menuDeletionVisit:(id /* block */)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnchor:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
