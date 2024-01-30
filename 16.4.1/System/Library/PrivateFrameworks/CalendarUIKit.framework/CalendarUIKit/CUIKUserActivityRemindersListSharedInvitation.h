@class NSString;

@interface CUIKUserActivityRemindersListSharedInvitation : CUIKUserActivityWithSource

@property (readonly, nonatomic) NSString *title;

- (id)initWithSource:(id)a0 title:(id)a1;
- (id)dictionary;
- (BOOL)_isMatchForSource:(id)a0 andTitle:(id)a1;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
