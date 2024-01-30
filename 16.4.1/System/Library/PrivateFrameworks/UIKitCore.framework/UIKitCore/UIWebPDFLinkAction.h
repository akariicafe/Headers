@class NSString;

@interface UIWebPDFLinkAction : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy, nonatomic) id /* block */ handler;

- (void)dealloc;

@end
