@class NSArray, NSMutableDictionary;

@interface SUActivityViewController : UIActivityViewController {
    NSMutableDictionary *_customTitles;
    NSArray *_suActivityItems;
    long long _transitionSafetyCount;
}

- (void)_prepareActivity:(id)a0;
- (void)_performActivity:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)_titleForActivity:(id)a0;
- (void)setTitle:(id)a0 forActivityType:(id)a1;

@end
