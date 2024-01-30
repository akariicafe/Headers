@class NSArray, NSString;

@interface VOSOutputEventCategory : NSObject

@property (class, readonly, nonatomic) VOSOutputEventCategory *interaction;
@property (class, readonly, nonatomic) NSArray *allCategories;

@property (retain, nonatomic) NSArray *outputEvents;
@property (retain, nonatomic) NSString *localizedCategoryName;

+ (id)system;
+ (id)braille;
+ (id)voiceOverFeedback;
+ (id)appFeedback;
+ (id)textEditing;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOutputEvents:(id)a0 localizedCategoryName:(id)a1;
- (BOOL)containsOutputEvent:(id)a0;

@end
