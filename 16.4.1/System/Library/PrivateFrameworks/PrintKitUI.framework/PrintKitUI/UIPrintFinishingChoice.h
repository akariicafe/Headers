@class NSString, NSDictionary;

@interface UIPrintFinishingChoice : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long finishingChoiceID;
@property (retain, nonatomic) NSDictionary *finishingChoiceInfo;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 finishingChoiceID:(long long)a1 finishingChoiceInfo:(id)a2;

@end
