@protocol CNTUDialRequest;

@interface _CNUIUserActionDialRequestItem : CNUIUserActionItem

@property (readonly, nonatomic) id<CNTUDialRequest> dialRequest;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)performActionWithContext:(id)a0;
- (unsigned long long)hash;
- (id)initWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 dialRequest:(id)a3 group:(long long)a4 options:(unsigned long long)a5;

@end
