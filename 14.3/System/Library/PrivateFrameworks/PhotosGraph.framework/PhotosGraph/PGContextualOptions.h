@class PGManager, NSDateComponents, NSDate;

@interface PGContextualOptions : NSObject {
    PGManager *_manager;
}

@property (retain, nonatomic) NSDate *localToday;
@property (retain, nonatomic) NSDateComponents *localTodayComponents;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 options:(id)a1;
- (id)availableContextualRules;

@end
