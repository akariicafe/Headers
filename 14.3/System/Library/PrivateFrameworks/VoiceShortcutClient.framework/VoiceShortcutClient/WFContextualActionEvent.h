@class NSArray, WFContextualAction, NSString;

@interface WFContextualActionEvent : NSObject

@property (readonly, nonatomic) WFContextualAction *action;
@property (readonly, nonatomic) NSArray *contentTypes;
@property (readonly, copy, nonatomic) NSString *containerName;
@property (readonly, nonatomic) unsigned long long surface;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0 contentTypes:(id)a1 containerName:(id)a2 surface:(unsigned long long)a3;

@end
