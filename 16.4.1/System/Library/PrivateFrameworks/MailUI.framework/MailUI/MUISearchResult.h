@class NSArray, MUISearchRequestID;

@interface MUISearchResult : NSObject

@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) MUISearchRequestID *requestID;
@property (readonly, nonatomic) unsigned char phraseKind;

- (void).cxx_destruct;

@end
