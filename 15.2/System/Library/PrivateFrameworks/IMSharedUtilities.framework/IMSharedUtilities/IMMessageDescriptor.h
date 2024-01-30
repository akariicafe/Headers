@class NSString, NSAttributedString, NSArray;

@interface IMMessageDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *messageGUID;
@property (readonly, copy, nonatomic) NSAttributedString *messageBody;
@property (readonly, nonatomic) NSArray *messageParts;

- (id)initWithMessageBody:(id)a0 messageGUID:(id)a1;
- (void).cxx_destruct;

@end
