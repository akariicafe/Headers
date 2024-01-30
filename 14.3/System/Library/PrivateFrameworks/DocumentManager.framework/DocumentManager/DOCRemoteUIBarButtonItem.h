@class NSUUID;

@interface DOCRemoteUIBarButtonItem : UIBarButtonItem <NSCopying>

@property (retain) NSUUID *uuid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
