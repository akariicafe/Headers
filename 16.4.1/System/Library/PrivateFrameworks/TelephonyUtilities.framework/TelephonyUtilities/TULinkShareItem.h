@class NSString, NSURL, TUConversationLink;

@interface TULinkShareItem : NSObject

@property (retain, nonatomic) TUConversationLink *tuConversationLink;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *placeholder;

- (void).cxx_destruct;
- (id)initWithTUConversationLink:(id)a0;
- (id)initWithTUConversationLink:(id)a0 title:(id)a1 placeholder:(id)a2;

@end
