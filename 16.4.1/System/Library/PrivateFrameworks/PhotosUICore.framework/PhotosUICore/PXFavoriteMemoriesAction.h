@class NSString;

@interface PXFavoriteMemoriesAction : PXMemoriesAction {
    NSString *_localizedActionName;
    NSString *_actionSystemImageName;
}

@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;

+ (BOOL)currentValueForMemories:(id)a0;
+ (BOOL)toggledValueForMemories:(id)a0;

- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)actionSystemImageName;
- (id)initWithMemories:(id)a0;
- (id)initWithMemories:(id)a0 favorite:(BOOL)a1;
- (id)localizedActionName;
- (void)performUndo:(id /* block */)a0;

@end
