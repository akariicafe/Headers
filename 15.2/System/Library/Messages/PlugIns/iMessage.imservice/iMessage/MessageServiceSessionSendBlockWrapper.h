@class NSString;

@interface MessageServiceSessionSendBlockWrapper : NSObject

@property (copy, nonatomic) NSString *GUID;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL isDelayedRichLinkBlock;

- (id)description;
- (id)init;
- (void)dealloc;

@end
