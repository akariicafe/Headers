@class NSDictionary;

@interface CalXMLElementRedactionRule : NSObject

@property int elementName;
@property int content;
@property int cdata;
@property (retain) NSDictionary *attributes;

- (void).cxx_destruct;
- (id)redactionRuleForAttribute:(id)a0;

@end
