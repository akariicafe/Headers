@class NSString, NSDictionary;

@interface WLMessageSMILPart : NSObject

@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) NSDictionary *attributes;

- (id)fileName;
- (void).cxx_destruct;
- (id)initWithElementName:(id)a0 attributes:(id)a1;

@end
