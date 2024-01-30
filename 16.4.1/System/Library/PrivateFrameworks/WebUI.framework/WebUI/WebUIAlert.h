@class NSString, NSArray;

@interface WebUIAlert : NSObject {
    int _otherAction;
    long long _indexOfSelectedIdentity;
}

@property (copy, nonatomic) id /* block */ actionHandler;
@property (readonly, nonatomic) int type;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *bodyText;
@property (readonly, copy, nonatomic) NSArray *buttonTitles;
@property (readonly, nonatomic) int defaultAction;
@property (readonly, nonatomic) int tableAction;
@property (nonatomic) int hideAction;
@property (retain, nonatomic) id context;
@property (retain, nonatomic) NSArray *identities;
@property (readonly, copy, nonatomic) NSArray *titles;
@property (readonly, nonatomic) id selectedIdentity;

- (void).cxx_destruct;
- (id)initWithType:(int)a0 title:(id)a1 bodyText:(id)a2 defaultAction:(int)a3 otherAction:(int)a4;
- (id)initWithType:(int)a0 title:(id)a1 bodyText:(id)a2 defaultAction:(int)a3 otherAction:(int)a4 tableAction:(int)a5;
- (id)_buttonTitleForAction:(int)a0;
- (int)actionForButtonTag:(long long)a0;
- (id)initWithType:(int)a0 title:(id)a1 defaultAction:(int)a2 otherAction:(int)a3;
- (id)initWithType:(int)a0 title:(id)a1 defaultAction:(int)a2 otherAction:(int)a3 tableAction:(int)a4;
- (void)setSelectedTableItemIndex:(long long)a0;

@end
