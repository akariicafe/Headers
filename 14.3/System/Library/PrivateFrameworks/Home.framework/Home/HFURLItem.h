@class NSURL, NSString;

@interface HFURLItem : HFItem

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 URL:(id)a1;
- (id)_subclass_updateWithOptions:(id)a0;

@end
