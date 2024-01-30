@class NSString, WAViewAction, WAViewType;

@interface WAViewData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *viewSessionID;
@property (readonly, nonatomic) WAViewType *viewType;
@property (readonly, nonatomic) WAViewAction *viewAction;

- (id)toDict;
- (id)initWithViewSessionID:(id)a0 viewType:(id)a1 viewAction:(id)a2;
- (void).cxx_destruct;

@end
