@class NSString, CKMentionEntityNode;

@interface CKMentionAutoCompleteAttribute : NSObject

@property (retain, nonatomic) CKMentionEntityNode *mentionEntityNode;
@property (retain, nonatomic) NSString *originalText;
@property (retain, nonatomic) NSString *displayText;

- (void).cxx_destruct;
- (id)initWithMentionEntityNode:(id)a0 originalText:(id)a1 displayText:(id)a2;

@end
