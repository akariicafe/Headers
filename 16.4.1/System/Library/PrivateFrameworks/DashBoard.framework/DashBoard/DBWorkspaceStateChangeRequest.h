@class NSMutableArray, RBSProcessHandle;

@interface DBWorkspaceStateChangeRequest : NSObject <NSCopying, NSMutableCopying> {
    RBSProcessHandle *_source;
}

@property (readonly, nonatomic) NSMutableArray *changeItems;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithRequest:(id)a0;

@end
