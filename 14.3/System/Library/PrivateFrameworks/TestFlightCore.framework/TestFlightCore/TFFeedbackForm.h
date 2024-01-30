@class NSString, NSArray;

@interface TFFeedbackForm : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *entryGroups;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 entryGroups:(id)a1;

@end
