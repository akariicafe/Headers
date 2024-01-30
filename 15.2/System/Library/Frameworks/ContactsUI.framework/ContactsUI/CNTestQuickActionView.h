@class NSString, NSMutableArray;

@interface CNTestQuickActionView : UIView <CNContactQuickActionPresentation>

@property (readonly, nonatomic) NSMutableArray *titlesAssigned;
@property (readonly, nonatomic) NSMutableArray *statesAssigned;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
