@class NSString, NSObject;
@protocol BMIdentifiableContentEvent;

@interface HVConsumptionContext : NSObject {
    id /* block */ _scheduledTaskShouldContinueBlock;
}

@property (readonly, nonatomic) NSObject<BMIdentifiableContentEvent> *content;
@property (readonly, nonatomic) NSString *contentProtection;

- (id)initWithContent:(id)a0 contentProtection:(id)a1 scheduledTaskShouldContinueBlock:(id /* block */)a2;
- (id)description;
- (BOOL)shouldContinue;
- (void).cxx_destruct;

@end
