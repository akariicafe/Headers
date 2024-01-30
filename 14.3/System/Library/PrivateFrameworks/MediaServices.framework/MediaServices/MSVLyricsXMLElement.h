@class NSString, NSMutableString;

@interface MSVLyricsXMLElement : NSObject

@property (copy, nonatomic) NSString *elementName;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableString *mutableText;

- (void).cxx_destruct;
- (id)description;

@end
