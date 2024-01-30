@class NSUUID;

@interface DOCRemoteUIBarButtonItem : UIBarButtonItem <NSCopying>

@property (retain) NSUUID *uuid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
