@class NSString, NSArray, IPPerson, NSDate, NSMutableArray, NSMutableDictionary;

@interface IPMessage : NSObject {
    NSMutableArray *_messageUnits;
    NSMutableDictionary *_keywordsDictionary;
    NSString *_lowercaseSubject;
}

@property (retain) NSString *identifier;
@property (retain) NSString *threadIdentifier;
@property (retain) NSString *subject;
@property (retain) IPPerson *sender;
@property (retain) NSArray *recipients;
@property (retain) NSDate *dateSent;
@property (retain) NSString *type;
@property (retain) NSString *htmlContent;
@property (readonly) unsigned long long messageUnitsTextLength;
@property (readonly) NSString *lowercaseSubject;
@property BOOL isReply;
@property (retain, nonatomic) NSArray *messageUnits;
@property BOOL isSent;
@property BOOL isGroupConversation;
@property BOOL isSenderSignificant;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 subject:(id)a1 sender:(id)a2 recipients:(id)a3 dateSent:(id)a4 type:(id)a5;
- (id)initWithDateSent:(id)a0 subject:(id)a1;
- (void)addMessageUnit:(id)a0;
- (id)firstHeaderValueForKey:(id)a0 inHeaders:(id)a1;
- (id)initWithSGIPMessage:(id)a0;
- (id)initWithDateSent:(id)a0;
- (id)initWithIdentifier:(id)a0 subject:(id)a1 sender:(id)a2 recipients:(id)a3 dateSent:(id)a4;
- (id)initWithHTMLContent:(id)a0 emailHeadersDictionary:(id)a1 dateSent:(id)a2;
- (void)addDetectedKeyword:(id)a0 classificationTypeIdentifier:(id)a1;
- (id)detectedKeywordsDictionary;

@end
