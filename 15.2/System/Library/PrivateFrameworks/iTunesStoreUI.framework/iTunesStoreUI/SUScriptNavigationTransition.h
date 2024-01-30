@class NSString, SUNavigationContainerViewController, NSMutableArray, SUScriptNavigationItem;

@interface SUScriptNavigationTransition : SUScriptObject {
    long long _status;
    NSString *_title;
    SUNavigationContainerViewController *_container;
}

@property (retain, nonatomic) NSMutableArray *finishBlocks;
@property (nonatomic) long long fromIndex;
@property (retain, nonatomic) NSString *rightBarButton;
@property (nonatomic) long long status;
@property (nonatomic) long long toIndex;
@property (retain, nonatomic) SUScriptNavigationItem *topNavigationItem;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (void).cxx_destruct;
- (id)attributeKeys;
- (void)addFinishBlock:(id /* block */)a0;
- (id)scriptAttributeKeys;
- (void)finishedLoading;
- (id)initWithContainer:(id)a0 finishBlock:(id /* block */)a1;

@end
