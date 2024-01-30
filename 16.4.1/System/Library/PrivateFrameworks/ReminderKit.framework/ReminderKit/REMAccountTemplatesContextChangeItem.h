@class REMManualOrdering, REMAccountChangeItem;

@interface REMAccountTemplatesContextChangeItem : NSObject

@property (retain, nonatomic) REMAccountChangeItem *accountChangeItem;
@property (readonly, nonatomic) REMManualOrdering *unsavedManualOrdering;

- (void).cxx_destruct;
- (id)addTemplateWithName:(id)a0 configuration:(id)a1;
- (void)updateManualOrdering:(id)a0;
- (id)initWithAccountChangeItem:(id)a0;

@end
