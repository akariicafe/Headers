@class NSString;

@interface MPStoreLyricsResponse : NSObject

@property (nonatomic, getter=isTTML) BOOL TTML;
@property (retain, nonatomic) NSString *lyricsContent;
@property (retain, nonatomic) NSString *lyricsID;

- (void).cxx_destruct;

@end
