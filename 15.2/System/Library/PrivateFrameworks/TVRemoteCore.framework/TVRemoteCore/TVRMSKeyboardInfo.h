@class NSString;

@interface TVRMSKeyboardInfo : NSObject

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL secureText;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardInputType;
@property (nonatomic) long long minimumCharacters;
@property (nonatomic) long long maximumCharacters;

- (void).cxx_destruct;
- (id)initWithItemsArray:(id)a0;

@end
