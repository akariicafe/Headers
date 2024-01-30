@class CNPropertyBestIDSValueQuery;

@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate>

@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestFaceTimeQuery;
@property (nonatomic) long long type;

- (void)_queryFaceTimeStatus;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)canPerformAction;
- (void)performActionForItem:(id)a0 sender:(id)a1;
- (id)initWithContact:(id)a0 propertyItems:(id)a1;
- (void)queryComplete;

@end
