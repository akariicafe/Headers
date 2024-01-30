@class NSString, NSArray;

@interface IMSPISuggestionsObject : NSObject

@property (readonly) NSString *chatGUID;
@property (readonly) NSString *displayName;
@property (readonly) NSArray *participants;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChatGuid:(id)a0 displayName:(id)a1 participants:(id)a2;

@end
