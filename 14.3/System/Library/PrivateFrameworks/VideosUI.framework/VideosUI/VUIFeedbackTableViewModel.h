@class VUILabel, NSArray;

@interface VUIFeedbackTableViewModel : NSObject

@property (retain, nonatomic) VUILabel *headerTextView;
@property (retain, nonatomic) NSArray *descriptionTextView;

+ (id)headerViewWithString:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)descriptionTextViewWithString:(id)a0 layout:(id)a1 existingView:(id)a2;

- (void).cxx_destruct;

@end
