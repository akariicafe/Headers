@class NSString, NSAttributedString, NSArray;

@interface IMMessageDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *messageGUID;
@property (readonly, copy, nonatomic) NSAttributedString *messageBody;
@property (readonly, nonatomic) NSArray *messageParts;

- (void).cxx_destruct;
- (id)initWithMessageBody:(id)a0 messageGUID:(id)a1;

@end
