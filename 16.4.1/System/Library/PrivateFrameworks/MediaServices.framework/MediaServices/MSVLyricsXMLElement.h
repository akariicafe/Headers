@class NSString, NSMutableString;

@interface MSVLyricsXMLElement : NSObject

@property (copy, nonatomic) NSString *elementName;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableString *mutableText;

- (id)description;
- (void).cxx_destruct;

@end
