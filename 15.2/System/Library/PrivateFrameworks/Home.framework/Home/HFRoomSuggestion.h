@class NSString, NSSet;

@interface HFRoomSuggestion : NSObject

@property (class, readonly, copy, nonatomic) id /* block */ priorityComparator;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSSet *aliases;
@property (readonly, nonatomic) long long priority;

+ (id)suggestionWithName:(id)a0 priority:(long long)a1;
+ (id)suggestionWithName:(id)a0 priority:(long long)a1 aliases:(id)a2;

- (void).cxx_destruct;

@end
