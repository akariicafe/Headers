@class NSString, NSArray, NSData, NSDate, NSNumber, NSDictionary;

@interface CIDCElement : NSObject

@property (retain) NSString *elementIdentifier;
@property (retain) NSString *stringValue;
@property (retain) NSData *dataValue;
@property (retain) NSDate *dateValue;
@property (retain) NSNumber *numberValue;
@property (retain) NSArray *arrayValue;
@property (retain) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)initWithElementIdentifier:(id)a0 dataValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 arrayValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 dateValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 dictionaryValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 stringValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 numberValue:(id)a1;
- (id)initWithElementIdentifier:(id)a0 stringValue:(id)a1 dataValue:(id)a2 dateValue:(id)a3 numberValue:(id)a4 arrayValue:(id)a5 dictionaryValue:(id)a6;

@end
