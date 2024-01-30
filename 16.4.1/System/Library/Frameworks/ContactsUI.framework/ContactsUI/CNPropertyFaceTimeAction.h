@class CNPropertyBestIDSValueQuery;

@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate>

@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestFaceTimeQuery;
@property (nonatomic) long long type;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_queryFaceTimeStatus;
- (BOOL)canPerformAction;
- (id)initWithContact:(id)a0 propertyItems:(id)a1;
- (void)performActionForItem:(id)a0 sender:(id)a1;
- (void)queryComplete;

@end
