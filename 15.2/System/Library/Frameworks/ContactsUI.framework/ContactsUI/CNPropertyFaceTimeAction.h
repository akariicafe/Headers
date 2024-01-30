@class CNPropertyBestIDSValueQuery;

@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate>

@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestFaceTimeQuery;
@property (nonatomic) long long type;

- (BOOL)canPerformAction;
- (void)performActionForItem:(id)a0 sender:(id)a1;
- (id)initWithContact:(id)a0 propertyItems:(id)a1;
- (void).cxx_destruct;
- (void)queryComplete;
- (void)_queryFaceTimeStatus;
- (void)dealloc;

@end
