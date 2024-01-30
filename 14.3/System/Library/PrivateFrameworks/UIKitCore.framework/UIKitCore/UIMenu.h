@class NSString, NSArray;

@interface UIMenu : UIMenuElement

@property (nonatomic) struct { BOOL isPreparedForDisplay; BOOL containsSelectedItem; } metadata;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSArray *children;

+ (id)menuWithTitle:(id)a0 imageName:(id)a1 identifier:(id)a2 options:(unsigned long long)a3 children:(id)a4;
+ (BOOL)supportsSecureCoding;
+ (id)menuWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 options:(unsigned long long)a3 children:(id)a4;
+ (id)menuWithChildren:(id)a0;
+ (id)menuWithTitle:(id)a0 children:(id)a1;

- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)menuByReplacingChildren:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)_mutableCopy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_immutableCopy;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithMenu:(id)a0 overrideChildren:(id)a1;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (id)_spiRepresentation;
- (id)initWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 options:(unsigned long long)a3 children:(id)a4;
- (BOOL)_containsSelectedItem;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2 identifier:(id)a3 options:(unsigned long long)a4 children:(id)a5;

@end
