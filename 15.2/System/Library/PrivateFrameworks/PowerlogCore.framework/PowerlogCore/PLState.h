@class NSString, NSDate;

@interface PLState : NSObject

@property (retain) id lastValue;
@property (retain) id currValue;
@property (retain) NSDate *stateChangeTime;
@property (readonly) unsigned long long stateId;
@property (readonly) NSString *entryKey;

+ (void)load;

- (void).cxx_destruct;
- (BOOL)updateWithEntry:(id)a0;
- (BOOL)updateWithValue:(id)a0;
- (id)initWithStateId:(unsigned long long)a0 entryKey:(id)a1 currValue:(id)a2;
- (void)updateWithLastEntry;

@end
