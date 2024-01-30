@class NSString, NSArray, PEEditAction;

@interface PEEditActionEventBuilder : NSObject

@property (retain, nonatomic) PEEditAction *action;
@property (retain, nonatomic) NSString *actionDescription;
@property (retain, nonatomic) NSArray *assets;
@property (nonatomic) BOOL hasError;

- (void).cxx_destruct;
- (id)buildEvent;

@end
