@class UIView;

@interface _UICalendarViewCustomViewDecoration : _UICalendarViewDecoration

@property (copy, nonatomic) id /* block */ customViewProvider;
@property (retain, nonatomic) UIView *customView;

- (void).cxx_destruct;
- (id)_decorationViewForReuseView:(id)a0;
- (id)initWithCustomViewProvider:(id /* block */)a0;

@end
