@class NSString;

@interface VUIActionMarkedAsWatched : VUIAction

@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *itemType;
@property (retain, nonatomic) NSString *adamID;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
