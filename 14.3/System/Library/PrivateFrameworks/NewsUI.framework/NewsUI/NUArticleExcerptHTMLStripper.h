@class NSString, NSMutableArray;

@interface NUArticleExcerptHTMLStripper : NSObject <NSXMLParserDelegate>

@property (readonly, nonatomic) NSMutableArray *parts;
@property (readonly, nonatomic) NSString *strippedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
