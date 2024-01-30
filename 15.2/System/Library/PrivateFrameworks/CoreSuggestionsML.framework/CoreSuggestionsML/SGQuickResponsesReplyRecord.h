@class NSString;

@interface SGQuickResponsesReplyRecord : NSObject

@property (readonly, nonatomic) NSString *langResponse;
@property (readonly, nonatomic) double displayed;
@property (readonly, nonatomic) double selected;
@property (readonly, nonatomic) double matched;

- (void).cxx_destruct;
- (id)initWithDisplayed:(double)a0 selected:(double)a1 matched:(double)a2;

@end
