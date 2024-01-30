@class NSString;

@interface CUIKUserActivityRemindersListSharedInvitation : CUIKUserActivityWithSource

@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (id)initWithSource:(id)a0 title:(id)a1;
- (BOOL)_isMatchForSource:(id)a0 andTitle:(id)a1;

@end
