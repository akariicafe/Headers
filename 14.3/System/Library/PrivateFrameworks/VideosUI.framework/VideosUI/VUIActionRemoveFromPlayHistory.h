@class NSString;

@interface VUIActionRemoveFromPlayHistory : VUIAction

@property (retain, nonatomic) NSString *deleteID;
@property (retain, nonatomic) NSString *canonicalID;
@property (nonatomic) BOOL isContinueWatching;

- (void).cxx_destruct;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContextData:(id)a0 isContinueWatching:(BOOL)a1;

@end
