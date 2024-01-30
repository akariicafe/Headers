@class NSDictionary, NSArray;

@interface EDWebContentParserResults : NSObject

@property (copy, nonatomic) NSDictionary *dataDetectionResults;
@property (copy, nonatomic) NSArray *remoteContentLinks;
@property (copy, nonatomic) NSArray *richLinkResults;

- (void).cxx_destruct;

@end
