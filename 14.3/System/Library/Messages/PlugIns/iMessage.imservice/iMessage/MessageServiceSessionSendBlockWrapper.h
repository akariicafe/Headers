@class NSString;

@interface MessageServiceSessionSendBlockWrapper : NSObject

@property (copy, nonatomic) NSString *GUID;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL isDelayedRichLinkBlock;

- (id)init;
- (void)dealloc;
- (id)description;

@end
